/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:56:27 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/24 10:52:02 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	if (argc != 2) {
		std::cout << "Error: Invalid number of arguments" << std::endl;
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
    return 0;
}
