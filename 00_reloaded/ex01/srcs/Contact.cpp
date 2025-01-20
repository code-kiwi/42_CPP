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

std::string Contact::getFirstName(bool truncated) const {
    if (truncated) {
        if (this->_firstName.length() > 10)
            return (this->_firstName.substr(0, 9) + '.');
        else
            return (std::string(10 - this->_firstName.length(), ' ') + this->_firstName);
    }
    return (this->_firstName);
}

std::string Contact::getLastName(bool truncated) const {
    if (truncated) {
        if (this->_lastName.length() > 10)
            return (this->_lastName.substr(0, 9) + '.');
        else
            return (std::string(10 - this->_lastName.length(), ' ') + this->_lastName);
    }
    return (this->_lastName);
}

std::string Contact::getNickName(bool truncated) const {
    if (truncated) {
        if (this->_nickName.length() > 10)
            return (this->_nickName.substr(0, 9) + '.');
        else
            return (std::string(10 - this->_nickName.length(), ' ') + this->_nickName);
    }
    return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) const {
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
    return (this->_darkestSecret);
}

void    Contact::display(void) const {
    std::cout << "First Name    : " << this->getFirstName() << std::endl;
	std::cout << "Last Name     : " << this->getLastName() << std::endl;
	std::cout << "NickName      : " << this->getNickName() << std::endl;
	std::cout << "Phone Number  : " << this->getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void Contact::setInfo(void) {
    do {
        std::cout << "\t- First Name: ";
        std::getline(std::cin, this->_firstName);
        if (this->_firstName.empty()) {
            std::cerr << "\tERROR: Field cannot be empty" << std::endl;
        }
    } while ((this->_firstName.empty() && !(std::cin.eof() || std::cin.fail())));
    if (std::cin.eof() || std::cin.fail()) {
        return;
    }

    do {
        std::cout << "\t- Last Name: ";
        std::getline(std::cin, this->_lastName);
        if (this->_lastName.empty()) {
            std::cerr << "\tERROR: Field cannot be empty" << std::endl;
        }
    } while ((this->_lastName.empty() && !(std::cin.eof() || std::cin.fail())));
    if (std::cin.eof() || std::cin.fail()) {
        return;
    }

    do {
        std::cout << "\t- Nickname: ";
        std::getline(std::cin, this->_nickName);
        if (this->_nickName.empty()) {
            std::cerr << "\tERROR: Field cannot be empty" << std::endl;
        }
    } while ((this->_nickName.empty() && !(std::cin.eof() || std::cin.fail())));
    if (std::cin.eof() || std::cin.fail()) {
        return;
    }

    do {
        std::cout << "\t- Phone Number: ";
        std::getline(std::cin, this->_phoneNumber);
        if (this->_phoneNumber.empty()) {
            std::cerr << "\tERROR: Field cannot be empty" << std::endl;
        }
    } while ((this->_phoneNumber.empty() && !(std::cin.eof() || std::cin.fail())));
    if (std::cin.eof() || std::cin.fail()) {
        return;
    }

    do {
        std::cout << "\t- Darkest Secret: ";
        std::getline(std::cin, this->_darkestSecret);
        if (this->_darkestSecret.empty()) {
            std::cerr << "\tERROR: Field cannot be empty" << std::endl;
        }
    } while ((this->_darkestSecret.empty() && !(std::cin.eof() || std::cin.fail())));
    if (std::cin.eof() || std::cin.fail()) {
        return;
    }
}
