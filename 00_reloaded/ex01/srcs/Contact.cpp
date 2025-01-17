/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:43:31 by codekiwi          #+#    #+#             */
/*   Updated: 2025/01/17 15:11:32 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(void) : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("") {};

Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkestSecret)
    : _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) {};

Contact::~Contact() {};

std::string Contact::getFirstName(bool truncated = false) const {
    if (truncated) {
        if (_firstName.length() > 10)
            return (_firstName.substr(0, 9) + '.');
        else
            return (std::string(10 - _firstName.length(), ' ') + _firstName);
    }
    return (_firstName);
}

std::string Contact::getLastName(bool truncated = false) const {
    if (truncated) {
        if (_lastName.length() > 10)
            return (_lastName.substr(0, 9) + '.');
        else
            return (std::string(10 - _lastName.length(), ' ') + _lastName);
    }
    return (_lastName);
}

std::string Contact::getNickName(bool truncated = false) const {
    if (truncated) {
        if (_nickName.length() > 10)
            return (_nickName.substr(0, 9) + '.');
        else
            return (std::string(10 - _nickName.length(), ' ') + _nickName);
    }
    return (_nickName);
}

std::string Contact::getPhoneNumber(void) const {
    return (_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
    return (_darkestSecret);
}

void    Contact::display(void) const {
    std::cout << "First Name    : " << getFirstName() << std::endl;
	std::cout << "Last Name     : " << getLastName() << std::endl;
	std::cout << "NickName      : " << getNickName() << std::endl;
	std::cout << "Phone Number  : " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
	std::cout << std::endl;
}