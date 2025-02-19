/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:06:10 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 03:36:31 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("Unknown_clap_name"), ScavTrap("Unknown_clap_name"), FragTrap("Unknown_clap_name"), _name("Unknown") {
    std::cout << "DiamondTrap default constructor called for " << this->_name << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructor's end" << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name) {
    std::cout << "DiamondTrap name constructor called for " << this->_name << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructor's end " << ScavTrap::_energyPoints << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& otherDiamondTrap): ClapTrap(otherDiamondTrap), ScavTrap(otherDiamondTrap), FragTrap(otherDiamondTrap), _name(otherDiamondTrap._name) {
    std::cout << "DiamondTrap copy constructor called for " << this->_name << std::endl;
    ClapTrap::_name = this->_name + "_clap_name";
    std::cout << "Constructor's end" << std::endl << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& otherDiamondTrap) {
    std::cout << "DiamondTrap assignement operator called " << std::endl;
    if (this != &otherDiamondTrap) {
        ClapTrap::operator=(otherDiamondTrap);
    }
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout
        << "Hello, I am a DiamondTrap,"
        << " my first name is " << this->_name
        << " and my second name is " << ClapTrap::_name
        << std::endl;
}

std::ostream& operator<<(std::ostream& o, const DiamondTrap& dt) {
    std::cout
        << "DIAMONDTRAP - Name: " << dt.getName()
        << ", HitPoints: " << dt.getHitPoints()
        << ", EnergyPoints: " << dt.getEnergyPoints()
        << ", AttackDamages: " << dt.getAttackDamage();
    return o;
}
