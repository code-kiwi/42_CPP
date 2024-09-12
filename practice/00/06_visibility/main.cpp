/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:41 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 20:32:27 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

int	main(void) {
	Sample	instance;

	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	instance.publicFoo = 42;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	
	instance.publicBar();
	// instance._privateBar(); // does not compile

	return (0);
}
