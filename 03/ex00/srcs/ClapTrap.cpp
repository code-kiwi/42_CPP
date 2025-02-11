/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:30:59 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/11 15:27:51 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>

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
    std::cout << "ClapTrap assignement operator called " << std::endl;
    if (this != &otherClapTrap) {
        this->_hitPoints = otherClapTrap._hitPoints;
        this->_energyPoints = otherClapTrap._energyPoints;
        this->_attackDamage = otherClapTrap._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energyPoints == 0 || this->_hitPoints == 0) {
        std::cout
            << "ClapTrap " << this->_name
            << " cannot attack " << target << "..."
            << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout
        << "ClapTrap " << this->_name
        << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!"
        << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= this->_hitPoints) {
        this->_hitPoints = 0;
        std::cout
            << "ClapTrap " << this->_name
            << " has been attacked and died..."
            << std::endl;
        return;
    }
    this->_hitPoints -= amount;
    std::cout
        << "ClapTrap " << this->_name
        << " has been attacked and lost " << amount << " hit points!"
        << " HEALTH: " << this->_hitPoints
        << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints == 0 || this->_hitPoints == 0) {
        std::cout
            << "ClapTrap " << this->_name
            << " cannot be repaired..."
            << std::endl;
        return;
    }
    this->_energyPoints--;
    if (this->_hitPoints > std::numeric_limits<unsigned int>::max() - amount) {
        this->_hitPoints = std::numeric_limits<unsigned int>::max();
    } else {
        this->_hitPoints += amount;
    }
    std::cout
        << "ClapTrap " << this->_name
        << " has been repaired and got " << amount << " hit points!"
        << std::endl;
}
