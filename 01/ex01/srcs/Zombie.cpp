/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:50:17 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 19:22:38 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(const std::string& name) : _name(name) {}

Zombie::~Zombie(void) {
	std::cout << _name << " died..." << std::endl;
}

void	Zombie::setName(std::string name) {
	_name = name;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
