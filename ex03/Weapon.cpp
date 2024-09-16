/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:17:58 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/16 11:21:04 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// コンストラクタの定義
Weapon::Weapon(std::string type) : type(type) {}

// getType メソッドの定義
const std::string& Weapon::getType() const {
    return type;
}

// setType メソッドの定義
void Weapon::setType(std::string newType) {
    type = newType;
}