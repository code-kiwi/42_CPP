/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:58:54 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 11:43:45 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
    std::cout << "ScavTrap default constructor called for " << this->_name << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
    std::cout << "ScavTrap name constructor called for " << this->_name << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& otherScavTrap): ClapTrap(otherScavTrap) {
    std::cout << "ScavTrap copy constructor called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& otherScavTrap) {
    std::cout << "ScavTrap assignement operator called " << std::endl;
    if (this != &otherScavTrap) {
        ClapTrap::operator=(otherScavTrap);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_energyPoints == 0 || this->_hitPoints == 0) {
        std::cout
            << "ScavTrap " << this->_name
            << " cannot attack " << target << "..."
            << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout
        << "ScavTrap " << this->_name
        << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!"
        << std::endl;
}

void ScavTrap::guardGate(void) {
    if (this->_hitPoints == 0) {
        std::cout
            << "The ScavTrap " << this->_name
            << " cannot switch to Gate keeper mode..." << std::endl;
        return ;
    }
    std::cout
        << "The ScavTrap " << this->_name
        << " is now in Gate keeper mode!" << std::endl;
}

std::ostream& operator<<(std::ostream& o, const ScavTrap& st) {
    std::cout
        << "SCAVTRAP - Name: " << st.getName()
        << ", HitPoints: " << st.getHitPoints()
        << ", EnergyPoints: " << st.getEnergyPoints()
        << ", AttackDamages: " << st.getAttackDamage();
    return o;
}
