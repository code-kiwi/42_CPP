/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:30:59 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/10 23:01:27 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap name constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& otherClapTrap): _name(otherClapTrap._name), _hitPoints(otherClapTrap._hitPoints), _energyPoints(otherClapTrap._energyPoints), _attackDamage(otherClapTrap._attackDamage) {
    std::cout << "ClapTrap copy constructor called for " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherClapTrap) {
    if (this != &otherClapTrap) {
        
    }
}

void ClapTrap::attack(const std::string& target) {

}

void ClapTrap::takeDamage(unsigned int amount) {

}

void ClapTrap::beRepaired(unsigned int amount) {

}
