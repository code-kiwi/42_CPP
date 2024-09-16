/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:07:51 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/17 00:28:30 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkestSecret)
	: _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) {};

Contact::~Contact(void) {};

std::string	Contact::getFirstName(bool truncated) const {
	if (truncated) {
		if (_firstName.length() > 10)
			return (_firstName.substr(0, 9) + '.');
		else
			return (std::string(10 - _firstName.length(), ' ') + _firstName);
	}
	return (_firstName);
}

std::string	Contact::getLastName(bool truncated) const {
	if (truncated) {
		if (_lastName.length() > 10)
			return (_lastName.substr(0, 9) + '.');
		else
			return (std::string(10 - _lastName.length(), ' ') + _lastName);
	}
	return (_lastName);
}

std::string	Contact::getNickName(bool truncated) const {
	if (truncated) {
		if (_nickName.length() > 10)
			return (_nickName.substr(0, 9) + '.');
		else
			return (std::string(10 - _nickName.length(), ' ') + _nickName);
	}
	return (_nickName);
}

std::string	Contact::getPhoneNumber(bool truncated) const {
	if (truncated) {
		if (_phoneNumber.length() > 10)
			return (_phoneNumber.substr(0, 9) + '.');
		else
			return (std::string(10 - _phoneNumber.length(), ' ') + _phoneNumber);
	}
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(bool truncated) const {
	if (truncated) {
		if (_darkestSecret.length() > 10)
			return (_darkestSecret.substr(0, 9) + '.');
		else
			return (std::string(10 - _darkestSecret.length(), ' ') + _darkestSecret);
	}
	return (_darkestSecret);
}

void	Contact::display(void) const {
	std::cout << "First Name    : " << getFirstName() << std::endl;
	std::cout << "Last Name     : " << getLastName() << std::endl;
	std::cout << "NickName      : " << getNickName() << std::endl;
	std::cout << "Phone Number  : " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
	std::cout << std::endl;
}
