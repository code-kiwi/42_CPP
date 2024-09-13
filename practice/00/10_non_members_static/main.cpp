/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:41 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 03:11:00 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

void	f0(void) {
	Sample instance;
	std::cout << "Nb instances: " << Sample::getNbInst() << std::endl;

	return ;
}

void	f1(void) {
	Sample instance;
	std::cout << "Nb instances: " << Sample::getNbInst() << std::endl;
	f0();

	return ;
}

int	main(void) {
	std::cout << "Nb instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Nb instances: " << Sample::getNbInst() << std::endl;
	return (0);
}
