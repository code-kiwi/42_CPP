/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:14:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/21 16:59:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"

void MateriaSource::initStorage(AMateria** storage) {
    for (int i = 0; i < MateriaSource::STORAGE_SIZE; i++) {
        storage[i] = NULL;
    }
}

void MateriaSource::deleteStorage(AMateria** storage) {
    for (int i = 0; i < MateriaSource::STORAGE_SIZE; i++) {
        if (storage[i] != NULL) {
            delete storage[i];
            storage[i] = NULL;
        }
    }
}

MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource default constructor called" << std::endl;
    MateriaSource::initStorage(this->_storage);
}

MateriaSource::MateriaSource(const MateriaSource& otherMSource) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < MateriaSource::STORAGE_SIZE; i++) {
        this->_storage[i] = (otherMSource._storage[i] == NULL) ? NULL : otherMSource._storage[i]->clone();
    }
}

MateriaSource::~MateriaSource(void) {
    std::cout << "MateriaSource destructor called" << std::endl;
    MateriaSource::deleteStorage(this->_storage);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& otherMSource) {
    std::cout << "MateriaSource assignment operator called" << std::endl;
    if (this != &otherMSource) {
        MateriaSource::deleteStorage(this->_storage);
        for (int i = 0; i < MateriaSource::STORAGE_SIZE; i++) {
            this->_storage[i] = (otherMSource._storage[i] == NULL) ? NULL : otherMSource._storage[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
    if (materia == NULL) {
        std::cout << "The given materia is NULL..." << std::endl;
        return;
    }
    for (int i = 0; i < MateriaSource::STORAGE_SIZE; i++) {
        if (this->_storage[i] == NULL) {
            this->_storage[i] = materia;
            std::cout
                << "The materia " << materia->getType()
                << " was added to the materia source" << std::endl;
            return;
        }
    }
    std::cout
        << "The materia " << materia->getType()
        << " has not been added, the materia source's storage is full" << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < MateriaSource::STORAGE_SIZE; i++) {
        if (this->_storage[i] != NULL && this->_storage[i]->getType() == type) {
            return this->_storage[i]->clone();
        }
    }
    std::cout
        << "Materia of type " << type
        << " is not known by the materia source" << std::endl;
    return NULL;
}

const AMateria** MateriaSource::getStorage(void) const {
    return (const AMateria**) this->_storage;
}

int MateriaSource::getStorageSize(void) {
    return MateriaSource::STORAGE_SIZE;
}

std::ostream& operator<<(std::ostream& o, const MateriaSource& materiaSource) {
    const AMateria** storage = materiaSource.getStorage();
    int storageSize = MateriaSource::getStorageSize();

    o << "-------------MATERIASOURCE-------------" << std::endl;
    o << "Storage:" << std::endl;
    for (int i = 0; i < storageSize; i++) {
        if (storage[i] == NULL) {
            o << "- Empty block";
        } else {
            o << "- " << storage[i]->getType();
        }
        o << std::endl;
    }
    o << "------------------END------------------";
    return o;
}
