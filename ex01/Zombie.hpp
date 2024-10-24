/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:46:58 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/24 09:58:10 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void announce();
};

Zombie* zombieHorde(int N, std::string name);
