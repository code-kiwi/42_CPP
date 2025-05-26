/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:43:34 by codekiwi          #+#    #+#             */
/*   Updated: 2025/05/26 23:01:53 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

#include "PhoneBook.hpp"

void searchPhoneBook(const PhoneBook &book) {
    int index;
    std::string strIndex;
    bool error = false;

    book.displayContacts();
    if (book.getLength() == 0) {
        return ;
    }
    do {
        error = false;
        std::cout << "Select an index: ";
        std::getline(std::cin, strIndex);
        if (std::cin.eof() || std::cin.fail()) {
            return ;
        }
        if (strIndex.empty()) {
            std::cout << "ERROR: The index cannot be empty" << std::endl;
            error = true;
            continue ;
        }
        std::istringstream iss(strIndex);
        iss >> index;
        if (iss.fail() || !iss.eof()) {
            std::cout << "ERROR: Your index is not valid" << std::endl;
            error = true;
            continue ;
        }
        else if (index < 0 || index >= (int) book.getLength()) {
            std::cout << "ERROR: Index is between 0 and " << (int) (book.getLength() - 1) << std::endl;
            error = true;
            continue ;
        }
    } while (error);
    book.displayContact(index);
}

int main(void) {
    std::string command;
    PhoneBook book;

    std::cout << " --------------------------" << std::endl;
    std::cout << "|  YOUR AWESOME PHONEBOOK  |" << std::endl;
    std::cout << " --------------------------" << std::endl << std::endl;
    while (true) {
        std::cout << "Enter a command (ADD / SEARCH / EXIT): ";
		std::getline(std::cin, command);

        if (command == "ADD") {
            book.addContact();
        } else if (command == "SEARCH") {
            searchPhoneBook(book);
        } else if (command == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        std::cout << std::endl;

        if (std::cin.eof() || std::cin.fail()) {
            std::cout << "ERROR: The phoneBook app crashed..." << std::endl;
            break;
        }
    }
    return (0);
}
