/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:18:07 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/16 11:21:43 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// コンストラクタの定義
HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

// attack メソッドの定義
void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}