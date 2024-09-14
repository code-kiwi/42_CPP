/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:08:32 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/14 20:21:36 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.hpp"

std::string	getInput(const std::string& inputStr, const std::string& errorMessage) {
	std::string	str;
	do {
		std::cout << "\t- " << inputStr << ": ";
		std::getline(std::cin, str);
		if (str.empty()) {
			std::cout << "\tERROR: " << errorMessage << std::endl;
		}
	} while (str.empty());
	return (str);
}

int	main(void) {
	std::string	command, firstName, lastName, nickName, phoneNumber, darkestSecret;
	PhoneBook	book(8);

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
		} else if (command == "EXIT") {
			std:: cout << "Goodbye!" << std::endl;
			break ;
		} else {
			std:: cout << "INVALID COMMAND..." << std::endl;
		}
		std::cout << std::endl;
	}
	return (0);
}
