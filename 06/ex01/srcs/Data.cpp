/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:04:03 by mhotting          #+#    #+#             */
/*   Updated: 2025/06/27 23:23:50 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void): _name("Unknown"), _nb(0) {
    std::cout << "Data created, name: " << this->_name << ", nb: " << this->_nb << "." << std::endl;
}

Data::Data(const std::string& name, int nb): _name(name), _nb(nb) {
    std::cout << "Data created, name: " << this->_name << ", nb: " << this->_nb << "." << std::endl;
}

Data::Data(const Data& otherData): _name(otherData._name), _nb(otherData._nb) {
    std::cout << "Data created, name: " << this->_name << ", nb: " << this->_nb << "." << std::endl;
}

Data& Data::operator=(const Data& otherData) {
    if (this != &otherData) {
        this->_nb = otherData._nb;
    }
    return *this;
}

Data::~Data(void) {
    std::cout << "Data destroyed, name: " << this->_name << ", nb: " << this->_nb << "." << std::endl;
}

int Data::getNb(void) const {
    return this->_nb;
}

const std::string& Data::getName(void) const {
    return this->_name;
}

std::ostream& operator<<(std::ostream& o, const Data& data) {
    o << "Data - Name: " << data.getName() << " - Nb: " << data.getNb() << ".";
    return o;
}
