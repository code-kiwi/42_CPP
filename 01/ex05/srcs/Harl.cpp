/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:19:28 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/04 12:19:02 by mhotting         ###   ########.fr       */
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

Harl::Harl(void) {
    this->_funcs[0] = &Harl::debug;
    this->_funcs[1] = &Harl::info;
    this->_funcs[2] = &Harl::warning;
    this->_funcs[3] = &Harl::error;
    this->_funcs[4] = &Harl::unknown;
}

Harl::~Harl(void) {}

void Harl::complain(std::string level) {
    for (size_t i = 0; i < 4; i++) {
        if (Harl::_strLevels[i] == level) {
            (this->*_funcs[i])();
            return ;
        }
    }
    (this->*_funcs[4])();
}
