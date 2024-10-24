/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:15:47 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/24 10:53:05 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() { 
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; 
    }

void Harl::info() { 
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl; 
    }

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl; 
    }

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl; 
    }

void Harl::complain(std::string level) {
    const std::string correct_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    size_t index;

    for (index = 0; index < 4; index++)
        if (correct_levels[index] == level) break;
    switch (index) {
        case 0:
                debug();
        case 1:
                info();
        case 2:
                warning();
        case 3:
                error();
                break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
