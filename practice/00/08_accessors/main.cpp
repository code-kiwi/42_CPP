/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:41 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 00:45:51 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

int	main(void) {
	Sample instance;

	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(-5);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(33);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	return (0);
}
