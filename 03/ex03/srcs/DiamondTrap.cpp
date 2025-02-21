/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:06:10 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 08:24:53 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap("Unknown_clap_name"), _name("Unknown") {
    std::cout << "DiamondTrap default constructor called for " << this->_name << std::endl;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoints = FragTrap::getDefaultHitPoints();
    this->_energyPoints = ScavTrap::getDefaultEnergyPoints();
    this->_attackDamage = FragTrap::getDefaultAttackDamage();
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name) {
    std::cout << "DiamondTrap name constructor called for " << this->_name << std::endl;
    this->_hitPoints = FragTrap::getDefaultHitPoints();
    this->_energyPoints = ScavTrap::getDefaultEnergyPoints();
    this->_attackDamage = FragTrap::getDefaultAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap& otherDiamondTrap): ClapTrap(otherDiamondTrap), ScavTrap(otherDiamondTrap), FragTrap(otherDiamondTrap), _name(otherDiamondTrap._name) {
    std::cout << "DiamondTrap copy constructor called for " << this->_name << std::endl;
    ClapTrap::_name = this->_name + "_clap_name";
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

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout
        << "Hello, I am a DiamondTrap,"
        << " my first name is " << this->_name
        << " and my second name is " << ClapTrap::_name
        << std::endl;
}

const std::string& DiamondTrap::getName(void) const {
    return this->_name;
}

std::ostream& operator<<(std::ostream& o, const DiamondTrap& dt) {
    o
        << "DIAMONDTRAP - Name: " << dt.getName()
        << ", HitPoints: " << dt.getHitPoints()
        << ", EnergyPoints: " << dt.getEnergyPoints()
        << ", AttackDamages: " << dt.getAttackDamage();
    return o;
}
