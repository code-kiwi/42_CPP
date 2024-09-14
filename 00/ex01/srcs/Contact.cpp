/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:07:51 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/14 17:42:05 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkestSecret)
	: _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) {};

Contact::~Contact(void) {};

std::string	Contact::getFirstName(void) const {
	return (_firstName);
}

std::string	Contact::getLastName(void) const {
	return (_lastName);
}

std::string	Contact::getNickName(void) const {
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void) const {
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (_darkestSecret);
}

void	Contact::display(void) const {
	std::cout << "CONTACT:" << std::endl;
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "NickName: " << getNickName() << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
	std::cout << std::endl;
}
