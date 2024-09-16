/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:08:12 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/17 00:27:51 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(size_t maxContacts)
	: _maxContacts(maxContacts), _nextIndex(0) {
	_contacts.reserve(maxContacts);
}

PhoneBook::~PhoneBook(void) {};

void	PhoneBook::addContact(const Contact& contact) {
	if (_contacts.size() < _maxContacts) {
		_contacts.push_back(contact);
	} else {
		_contacts[_nextIndex] = contact;
	}
	_nextIndex = (_nextIndex + 1) % _maxContacts;
}

void	PhoneBook::displayContacts(void) const {
	if (_contacts.size() == 0) {
		std::cout << "No contact registered into the phone book" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First-Name| Last-Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (size_t i = 0; i < _contacts.size(); i++) {
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
	if (index < _contacts.size()) {
		_contacts[index].display();
	}
}

size_t	PhoneBook::getLength(void) const {
	return (_contacts.size());
}
