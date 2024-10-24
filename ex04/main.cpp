/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:13:21 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/24 10:10:41 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string readFile(const std::string& filename) {
    std::ifstream ifs(filename);
    if (!ifs) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return "";
    }

    std::string content((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
    ifs.close();
    return content;
}

std::string replaceStrings(const std::string& content, const std::string& s1, const std::string& s2) {
    if (s1.empty()) {
        return content;
    }
    std::string newContent = content;
    size_t pos = 0;
    while ((pos = newContent.find(s1, pos)) != std::string::npos) {
        newContent.erase(pos, s1.length());
        newContent.insert(pos, s2);
        pos += s2.length();
    }
    return newContent;
}

bool writeFile(const std::string& filename, const std::string& content) {
    std::ofstream ofs(filename);
    if (!ofs) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return false;
    }

    ofs << content;
    ofs.close();
    return true;
}


int main(int argc, char **argv) 
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::string content = readFile(filename);
    if (content.empty()) {
        return 1;
    }

    content = replaceStrings(content, s1, s2);

    std::string new_filename = filename + ".replace";
    if (!writeFile(new_filename, content)) {
        return 1;
    }

    return 0;
}
