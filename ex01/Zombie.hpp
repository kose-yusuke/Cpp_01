/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:46:58 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/02 23:12:42 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie();
    // Zombie(std::string name);
    ~Zombie();
    void setName(std::string name);
    void announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP