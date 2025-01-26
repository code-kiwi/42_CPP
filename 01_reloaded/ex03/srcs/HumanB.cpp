/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:14:24 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/26 14:47:38 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void) const {
    if (this->_weapon == NULL) {
        std::cout
            << this->_name
            << " has no weapon..."
            << std::endl;
        return;
    }
    std:: cout
        << this->_name
        << " attacks with their "
        << this->_weapon->getType()
        << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}
