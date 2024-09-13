/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:47 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 03:21:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(void) {
	std::cout << "Sample Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Sample Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) const {
	std::cout << "Member function bar called" << std::endl;
	return ;
}
