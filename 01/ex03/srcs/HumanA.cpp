/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:01:03 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/22 18:52:23 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

void    HumanA::attack(void) const {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
