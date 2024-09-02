/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:42:01 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/09/02 23:11:07 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5;
    std::string name = "Zombie";

    Zombie* horde = zombieHorde(N, name);
    if (horde != nullptr) {
        for (int i = 0; i < N; ++i) {
            horde[i].announce();
        }
        delete[] horde;
    } else {
        std::cerr << "Failed to create zombie horde" << std::endl;
    }

    return 0;
}
