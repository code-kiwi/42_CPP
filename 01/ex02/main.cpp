/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:24:50 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/21 21:32:54 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void) {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "ADDRESSES:" << std::endl;
	std::cout << "\t- string    (addr): " << &string << std::endl;
	std::cout << "\t- stringPTR (addr): " << stringPTR << std::endl;
	std::cout << "\t- stringREF (addr): " << &stringREF << std::endl << std::endl;

	std::cout << "VALUES:" << std::endl;
	std::cout << "\t- string    (val): " << string << std::endl;
	std::cout << "\t- stringPTR (val): " << *stringPTR << std::endl;
	std::cout << "\t- stringREF (val): " << stringREF << std::endl;

	return (0);
}