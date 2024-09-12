/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:47 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 00:44:07 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(void) {
	std::cout << "Sample Constructor called" << std::endl;
	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Sample Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const {
	return (this->_foo);
}

void	Sample::setFoo(int v) {
	if (v >= 0)
		this->_foo = v;
	return ;
}

