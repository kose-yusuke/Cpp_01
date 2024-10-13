/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:13:40 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/10 13:16:11 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

// #include "Harl.hpp"
#include <iostream>
#include <string>

class Harl {
private:
	void debug();
	void info();
	void warning();
	void error();
public:
	void complain(std::string level);
};

#endif