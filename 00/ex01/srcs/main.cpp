/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:08:32 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 13:16:07 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

#include "PhoneBook.hpp"

std::string	getInput(const std::string& inputStr, const std::string& errorMessage) {
	std::string	str;

	do {
		std::cout << "\t- " << inputStr << ": ";
		std::getline(std::cin, str);
		if (str.empty()) {
			std::cerr << "\tERROR: " << errorMessage << std::endl;
		}
	} while (str.empty());
	return (str);
}

int	getIntInput(
	const std::string& inputStr,
	const std::string& errorMessageEmpty,
	const std::string& errorMessageNumber

) {
	std::string	str;
	int			number;

	do {
		std::cout << inputStr << ": ";
		std::getline(std::cin, str);
		if (str.empty()) {
			std::cerr << "ERROR: " << errorMessageEmpty << std::endl;
			continue ;
		}
		std::istringstream	iss(str);
		if (!(iss >> number)) {
			std::cerr << "ERROR: " << errorMessageNumber << std::endl;
			continue ;
		}
		break ;
	} while (true);
	return (number);
}

int	main(void) {
	std::string	command, firstName, lastName, nickName, phoneNumber, darkestSecret;
	PhoneBook	book;

	while (true) {
		std::cout << "Enter a command (ADD / SEARCH / EXIT): ";
		std::getline(std::cin, command);
		
		if (command == "ADD") {
			firstName = getInput("Contact's first name", "The first name cannot be empty. Try again.");
			lastName = getInput("Contact's last name", "The last name cannot be empty. Try again.");
			nickName = getInput("Contact's nickname", "The nickname cannot be empty. Try again.");
			phoneNumber = getInput("Contact's phone number", "The phone number cannot be empty, Try again.");
			darkestSecret = getInput("Contact's darkest secret", "The darkest secret cannot be empty, Try again.");
			book.addContact(Contact(firstName, lastName, nickName, phoneNumber, darkestSecret));
		} else if (command == "SEARCH") {
			book.displayContacts();
			if (book.getLength() == 0) {
				std::cout << std::endl;
				continue ;
			}
			const int	index = getIntInput("Select an index", "Your input cannot be empty", "Your input is not a number");
			if (index < 0 || index >= (int) book.getLength()) {
				std::cerr << "ERROR: This index is not valid" << std::endl;
				std::cout << std::endl;
				continue ;
			}
			book.displayContact(index);
		} else if (command == "EXIT") {
			std:: cout << "Goodbye!" << std::endl;
			break ;
		} else {
			std:: cerr << "INVALID COMMAND..." << std::endl;
		}
		std::cout << std::endl;
	}
	return (0);
}
