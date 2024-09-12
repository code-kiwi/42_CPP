/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:41 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 01:05:50 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

int	main(void) {
	Sample	s1(42);
	Sample	s2(42);

	if (&s1 == &s1)
		std::cout << "s1 and s1 are physically equal" << std::endl;
	else
		std::cout << "s1 and s1 are NOT physically equal" << std::endl;

	if (&s1 == &s2)
		std::cout << "s1 and s2 are physically equal" << std::endl;
	else
		std::cout << "s1 and s2 are NOT physically equal" << std::endl;

	if (s1.compare(&s1) == 0)
		std::cout << "s1 and s1 are structurally equal" << std::endl;
	else
		std::cout << "s1 and s1 are NOT structurally equal" << std::endl;
	
	if (s1.compare(&s2) == 0)
		std::cout << "s1 and s2 are structurally equal" << std::endl;
	else
		std::cout << "s1 and s2 are NOT structurally equal" << std::endl;

	return (0);
}
