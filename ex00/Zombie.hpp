/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:46:58 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/01 21:51:26 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif // ZOMBIE_HPP