/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:43:37 by codekiwi          #+#    #+#             */
/*   Updated: 2025/01/17 15:27:44 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nextIndex(0), _isFull(false) {}

PhoneBook::~PhoneBook(void) {}

size_t  PhoneBook::getLength(void) const {
    return (_isFull ? 8 : this->_nextIndex);
}

void    PhoneBook::addContact(void) {
    this->_contacts[this->_nextIndex].setInfo();
    if (this->_nextIndex == 7 && !this->_isFull) {
        this->_isFull = true;
    }
    this->_nextIndex = (this->_nextIndex + 1) % 8;
}

void    PhoneBook::displayContacts(void) const {
    size_t nbContacts;

    if (this->_nextIndex == 0 && !this->_isFull) {
        std::cout << "No contact registered into the phone book..." << std::endl;
        return;
    }
    nbContacts = this->getLength();
    std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First-Name| Last-Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
    for (size_t i = 0; i < nbContacts; i++) {
        std::string indexString;
        std::ostringstream oss;

        oss << i;
        indexString = oss.str();
		std::cout
			<< "|"
			<< std::string(10 - indexString.length(), ' ') + indexString
			<< "|"
			<< _contacts[i].getFirstName(true)
			<< "|"
			<< _contacts[i].getLastName(true)
			<< "|"
			<< _contacts[i].getNickName(true)
			<< "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
}

void    PhoneBook::displayContact(size_t index) const {
    if (index < 8) {
        this->_contacts[index].display();
    }
}
