/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 01:59:04 by codekiwi          #+#    #+#             */
/*   Updated: 2024/10/16 02:11:27 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

int	main(void) {
	Sample	instance1;
	Sample	instance2(42);
	Sample	instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return (0);
}

/**
 * NOTES:
 * - Canonical form: Default constructor, copy constructor, assign operator, a destructor
 * - It is always a good practice to have a way to serialize the objects from a class
 * (use and toString method or overload the operator << with an instance of your class)
 * - We can put our default constructor into the private members in order to disable the
 * possibility to create a default object (without parameter) and it will still respect
 * the canonical pattern
 */
