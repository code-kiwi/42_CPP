/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:43:31 by codekiwi          #+#    #+#             */
/*   Updated: 2025/05/26 23:01:35 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(void) : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("") {};

Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkestSecret)
    : _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) {};

Contact::~Contact() {};

std::string Contact::getFirstName(void) const {
    return (this->_firstName);
}

std::string Contact::getLastName(void) const {
    return (this->_lastName);
}

std::string Contact::getNickName(void) const {
    return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) const {
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
    return (this->_darkestSecret);
}

void    Contact::display(void) const {
    std::cout << std::endl << "CONTACT INFO:" << std::endl;
    std::cout << "- First Name    : " << this->getFirstName() << std::endl;
	std::cout << "- Last Name     : " << this->getLastName() << std::endl;
	std::cout << "- NickName      : " << this->getNickName() << std::endl;
	std::cout << "- Phone Number  : " << this->getPhoneNumber() << std::endl;
	std::cout << "- Darkest Secret: " << this->getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

std::string Contact::fieldInput(std::string const &prompt) {
    std::string str;

    do {
        std::cout << "\t- " << prompt << ": ";
        std::getline(std::cin, str);
        if (std::cin.eof() || std::cin.fail()) {
            return "";
        }
        if (str.empty()) {
            std::cout << "\tERROR: Field cannot be empty" << std::endl;
        }
    } while ((str.empty() && !(std::cin.eof() || std::cin.fail())));
    return str;
}

void Contact::setInfo(void) {
    this->_firstName = Contact::fieldInput("First Name");
    if (this->_firstName == "") {
        return;
    }
    this->_lastName = Contact::fieldInput("Last Name");
    if (this->_lastName == "") {
        return;
    }
    this->_nickName = Contact::fieldInput("Nickname");
    if (this->_nickName == "") {
        return;
    }
    this->_phoneNumber = Contact::fieldInput("Phone Number");
    if (this->_phoneNumber == "") {
        return;
    }
    this->_darkestSecret = Contact::fieldInput("Darkest Secret");
    if (this->_darkestSecret == "") {
        return;
    }
}
