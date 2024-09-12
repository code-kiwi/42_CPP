/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:47 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 01:05:09 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(int v) {
	std::cout << "Sample Constructor called" << std::endl;
	this->_foo = v;
	std::cout << "this->getFoo(): " << this->_foo << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Sample Destructor called" << std::endl;
}

int	Sample::getFoo(void) const {
	return (this->_foo);
}

int	Sample::compare(Sample *other) const {
	if (this->getFoo() < other->getFoo())
		return (-1);
	else if (this->getFoo() > other->getFoo())
		return (1);
	return (0);
}
