/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:01:23 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/20 16:08:28 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void increment_int(int& intRef) {
	intRef++;
}

int	main(void) {
	int	nb = 42;

	std::cout << "Before: " << nb << std::endl;
	increment_int(nb);
	std::cout << "After: " << nb << std::endl;

	return (0);
}