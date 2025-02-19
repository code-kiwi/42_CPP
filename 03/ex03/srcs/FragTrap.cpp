/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:58:54 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/19 10:57:31 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
    std::cout << "FragTrap default constructor called for " << this->_name << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {
    std::cout << "FragTrap name constructor called for " << this->_name << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& otherFragTrap): ClapTrap(otherFragTrap) {
    std::cout << "FragTrap copy constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& otherFragTrap) {
    std::cout << "FragTrap assignement operator called " << std::endl;
    if (this != &otherFragTrap) {
        ClapTrap::operator=(otherFragTrap);
    }
    return *this;
}

void FragTrap::attack(const std::string& target) {
    if (this->_energyPoints == 0 || this->_hitPoints == 0) {
        std::cout
            << "FragTrap " << this->_name
            << " cannot attack " << target << "..."
            << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout
        << "FragTrap " << this->_name
        << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!"
        << std::endl;
}

void FragTrap::highFivesGuys(void) {
    if (this->_hitPoints == 0) {
        std::cout
            << "The FragTrap " << this->_name
            << " cannot request a high five..." << std::endl;
        return ;
    }
    std::cout
        << "The FragTrap " << this->_name
        << " requests a super high five!" << std::endl;
}

unsigned int FragTrap::getDefaultHitPoints(void) {
    return 100;
}

unsigned int FragTrap::getDefaultEnergyPoints(void) {
    return 100;
}

unsigned int FragTrap::getDefaultAttackDamage(void) {
    return 30;
}

std::ostream& operator<<(std::ostream& o, const FragTrap& st) {
    std::cout
        << "FRAGTRAP - Name: " << st.getName()
        << ", HitPoints: " << st.getHitPoints()
        << ", EnergyPoints: " << st.getEnergyPoints()
        << ", AttackDamages: " << st.getAttackDamage();
    return o;
}
