/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:15:47 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/13 16:17:51 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() { 
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; 
    }

void Harl::info() { 
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; 
    }

void Harl::warning() {
     std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; 
     }

void Harl::error() {
     std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl; 
     }

void Harl::complain(std::string level) {
    switch (level[0]) {
        case 'D':
            if (level == "DEBUG") {
                debug();
            }
            break;
        case 'I':
            if (level == "INFO") {
                info();
            }
            break;
        case 'W':
            if (level == "WARNING") {
                warning();
            }
            break;
        case 'E':
            if (level == "ERROR") {
                error();
            }
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}