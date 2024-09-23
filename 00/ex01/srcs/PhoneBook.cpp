/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:08:12 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 13:21:55 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nextIndex(0), _isFull(false) {};

PhoneBook::~PhoneBook(void) {};

void	PhoneBook::addContact(const Contact& contact) {
	_contacts[_nextIndex] = contact;
	if (_nextIndex == 7 && !_isFull)
		_isFull = true;
	_nextIndex = (_nextIndex + 1) % 8;
}

void	PhoneBook::displayContacts(void) const {
	size_t	nbContacts;

	if (_nextIndex == 0 && !_isFull) {
		std::cout << "No contact registered into the phone book" << std::endl;
		return ;
	}
	nbContacts = getLength();
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First-Name| Last-Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (size_t i = 0; i < nbContacts; i++) {
		std::string			indexString;
		std::ostringstream	oss;
		
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

void	PhoneBook::displayContact(size_t index) const {
	if (index < 8) {
		_contacts[index].display();
	}
}

size_t	PhoneBook::getLength(void) const {
	return (_isFull ? 8 : _nextIndex);
}
