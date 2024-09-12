/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:45:43 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 20:00:45 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(float const f) : pi(f), qd(42) {
	std::cout << "Sample Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Sample Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) const {
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
}
