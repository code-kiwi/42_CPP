/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:51:14 by codekiwi          #+#    #+#             */
/*   Updated: 2024/10/16 02:03:40 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(void) : _foo(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Sample::Sample(const int n) : _foo(n) {
	std::cout << "Parametric Constructor called" << std::endl;
}

Sample::Sample(const Sample& src) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Sample::~Sample(void) {
	std::cout << "Destrutor called" << std::endl;
}

int	Sample::getFoo(void) const {
	return (_foo);
}

Sample&	Sample::operator=(const Sample& rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		_foo = rhs.getFoo();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Sample& i) {
	o << "The value of _foo is: " << i.getFoo();
	return (o);
}
