/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 05:40:44 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 08:20:45 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"

void Character::initInventory(AMateria** _inventory) {
    for (int i = 0; i < Character::INVENTORY_SIZE; i++) {
        _inventory[i] = NULL;
    }
}

void Character::deleteInventory(AMateria** _inventory) {
    for (int i = 0; i < Character::INVENTORY_SIZE; i++) {
        if (_inventory[i] != NULL) {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
}

Character::Character(void): _name("John Doe") {
    std::cout << "Character default constructor called" << std::endl;
    Character::initInventory(this->_inventory);
}

Character::Character(const std::string& name): _name(name) {
    std::cout << "Character string constructor called" << std::endl;
    Character::initInventory(this->_inventory);

}

Character::Character(const Character& otherCharacter) {
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < Character::INVENTORY_SIZE; i++) {
        this->_inventory[i] = otherCharacter._inventory[i]->clone();
    }
}

Character::~Character(void) {
    std::cout << "Character destructor called" << std::endl;
    Character::deleteInventory(this->_inventory);
}

Character& Character::operator=(const Character& otherCharacter) {
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &otherCharacter) {
        this->_name = otherCharacter._name;
        Character::deleteInventory(this->_inventory);
        for (int i = 0; i < Character::INVENTORY_SIZE; i++) {
            this->_inventory[i] = otherCharacter._inventory[i]->clone();
        }
    }
    return *this;
}

const std::string& Character::getName() const {
    return this->_name;
}
        
void Character::equip(AMateria* m) {
    int i;

    if (m == NULL) {
        std::cout << "The given materia is NULL, impossible to equip it..." << std::endl;
        return;
    } else if (this->_inventory[Character::INVENTORY_SIZE - 1] != NULL) {
        std::cout << "The character's inventory is full..." << std::endl;
        return;
    }
    i = 0;
    while (this->_inventory[i] != NULL) {
        i++;
    }
    this->_inventory[i] = m;
    std::cout
        << "Character " << this->_name
        << " has equiped " << m->getType()
        << std::endl;
}

void Character::unequip(int idx) {
    AMateria* unequiped;
   if (idx < 0 || idx > Character::INVENTORY_SIZE - 1) {
        std::cout << "The given index is not valid..." << std::endl;
        return;
    } else if (this->_inventory[idx] == NULL) {
        std::cout << "The character has no weapon at index " << idx << "..." << std::endl;
        return;
    }
    unequiped = this->_inventory[idx];
    while (idx < Character::INVENTORY_SIZE - 1) {
        this->_inventory[idx] = this->_inventory[idx + 1];
        idx++;
    }
    this->_inventory[Character::INVENTORY_SIZE - 1] = NULL;
    std::cout
        << "Character " << this->_name
        << " has unequiped " << unequiped->getType()
        << std::endl;
}
void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > Character::INVENTORY_SIZE - 1) {
        std::cout << "The given index is not valid..." << std::endl;
        return;
    } else if (this->_inventory[idx] == NULL) {
        std::cout << "The character has no weapon at index " << idx << "..." << std::endl;
        return;
    }
    this->_inventory[idx]->use(target);
}

int Character::getInventorySize(void) {
    return Character::INVENTORY_SIZE;
}

const AMateria** Character::getInventory(void) const {
    return (const AMateria**) this->_inventory;
}

std::ostream& operator<<(std::ostream& o, const Character& character) {
    const AMateria** inventory = character.getInventory();
    int inventorySize = Character::getInventorySize();
    o
        << "CHARACTER: " << character.getName()
        << std::endl
        << "Inventory:" << std::endl;
    for (int i = 0; i < inventorySize; i++) {
        if (inventory[i] == NULL) {
            o << "\t- Empty block";
        } else {
            o << "\t- " << inventory[i]->getType();
        }
        if (i != inventorySize - 1) {
            o << std::endl;
        }
    }
    return o;
}
