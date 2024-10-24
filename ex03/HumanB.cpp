/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:18:14 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/24 10:01:55 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& newWeapon) {
    weapon = &newWeapon;
}

void HumanB::attack() {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
}