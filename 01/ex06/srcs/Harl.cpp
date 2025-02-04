/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:28 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/04 13:11:15 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Harl.hpp"

const std::string Harl::_strLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void Harl::debug(void) {
	std::cout 
		<< "[DEBUG]"
		<< std::endl
		<< "I love having extra bacon for my 7XL burger. I really do!"
		<< std::endl;
}

void Harl::info(void) {
	std::cout 
		<< "[INFO]"
		<< std::endl
		<< "I cannot believe adding extra bacon costs more money. I want more!"
		<< std::endl;
}

void Harl::warning(void) {
	std::cout 
		<< "[WARNING]"
		<< std::endl
		<< "I think I deserve to have some extra bacon for free."
		<< std::endl;
}

void Harl::error(void) {
	std::cout 
		<< "[ERROR]"
		<< std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void Harl::unknown(void) {
	std::cout 
		<< "[UNKNOWN]"
		<< std::endl
		<< "Stupid human, you chose a level that does not exist."
		<< std::endl;
}

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::complain(std::string levelName) {
    size_t level = Harl::_resolveLevel(levelName);

	switch (level) {
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARNING:
			this->warning();
		case ERROR:
			this->error();
			break;
		default:
			this->unknown();
	}
}

int Harl::_resolveLevel(std::string levelName) {
	for (int i = 0; i < 4; i++) {
		if (Harl::_strLevels[i] == levelName) {
			return i;
		}
	}
	return -1;
}
