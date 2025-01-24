/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:45:01 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/24 10:09:55 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::~Zombie(void) {
    std::cout << this->_name << " died again, weird for a zombie..." << std::endl;
}

void Zombie::announce(void) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
