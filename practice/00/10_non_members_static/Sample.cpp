/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:47 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 01:16:52 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(void) {
	std::cout << "Sample Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return ;
}

Sample::~Sample(void) {
	std::cout << "Sample Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	
	return ;
}

int	Sample::getNbInst(void) {
	return (Sample::_nbInst);
}

int	Sample::_nbInst = 0;
