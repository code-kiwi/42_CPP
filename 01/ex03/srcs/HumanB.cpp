/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:00:43 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/22 18:56:15 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
    : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void    HumanB::attack(void) const {
    if (_weapon == NULL) {
        std::cout << _name << " has no weapon" << std::endl;
        return ;
    }
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}
