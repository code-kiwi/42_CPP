/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:14:21 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/26 14:48:12 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) const {
    std:: cout
        << this->_name
        << " attacks with their "
        << this->_weapon.getType()
        << std::endl;
}
