/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:18:14 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/16 11:27:29 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// コンストラクタの定義
HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

// setWeapon メソッドの定義
void HumanB::setWeapon(Weapon& newWeapon) {
    weapon = &newWeapon;
}

// attack メソッドの定義
void HumanB::attack() {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
}