/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:08:12 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/14 19:47:51 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	for (size_t i = 0; i < _contacts.size(); i++) {
		std::cout << "index: " << i << std::endl;
		_contacts[i].display();
	}
}
