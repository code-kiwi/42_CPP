/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:11:41 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/13 03:32:06 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

int	main(void) {
	Sample	s1;
	Sample*	s1p = &s1;
	Sample	s2;
	Sample*	s2p = &s2;

	int		Sample::*p = NULL; // Pointer to a member attribute of Sample (pointer to an int which is a member of Sample)
	void	(Sample::*f)(void) const; // Pointer to an attribute function of Sample

	p = &Sample::foo; // p is not proper to an instance of the Sample class
	std::cout << "Value of member foo: " << s1.foo << std::endl;
	s1.*p = 21;
	std::cout << "Value of member foo: " << s1.foo << std::endl;
	s1p->*p = 42;
	std::cout << "Value of member foo: " << s1.foo << std::endl;


	std::cout << "Value of member foo: " << s2.foo << std::endl;
	s2.*p = 78;
	std::cout << "Value of member foo: " << s2.foo << std::endl;

	f = &Sample::bar; // f is not proper to an instance of the Sample class
	(s1.*f)();
	(s1p->*f)();
	(s2.*f)();
	(s2p->*f)();

	return (0);
}
