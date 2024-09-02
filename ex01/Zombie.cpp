/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:48:39 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/02 23:17:46 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

// Zombie::Zombie(std::string name) : name(name) {}
Zombie::Zombie() {} 

Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return nullptr;
    }

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return horde;
}