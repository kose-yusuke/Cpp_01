/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:13:21 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/20 12:14:15 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) 
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream ifs(filename);
    if (!ifs) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));

    std::string new_filename = filename + ".replace";
    std::ofstream ofs(new_filename);
    if (!ofs) {
        std::cerr << "Error: Unable to open file " << new_filename << std::endl;
        return 1;
    }

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    ofs << content;

    ifs.close();
    ofs.close();

    return 0;
}

