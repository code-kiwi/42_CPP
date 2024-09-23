/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:34:02 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/23 18:07:34 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void	Harl::debug(void) {
	std::cout 
		<< "[DEBUG]"
		<< std::endl
		<< "I love having extra bacon for my 7XL burger. I really do!"
		<< std::endl;
}

void	Harl::info(void) {
	std::cout 
		<< "[INFO]"
		<< std::endl
		<< "I cannot believe adding extra bacon costs more money. I want more!"
		<< std::endl;
}

void	Harl::warning(void) {
	std::cout 
		<< "[WARNING]"
		<< std::endl
		<< "I think I deserve to have some extra bacon for free."
		<< std::endl;
}

void	Harl::error(void) {
	std::cout 
		<< "[ERROR]"
		<< std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::unknown(void) {
	std::cout 
		<< "[UNKNOWN]"
		<< std::endl
		<< "Stupid human, you chose a level that does not exist."
		<< std::endl;
}

void	Harl::complain(std::string level) {
	void	(Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (size_t i = 0; i < Harl::_strLevels->length(); i++) {
		if (Harl::_strLevels[i] == level) {
			(this->*funcs[i])();
			return ;
		}
	}
	unknown();
}

const std::string	Harl::_strLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
