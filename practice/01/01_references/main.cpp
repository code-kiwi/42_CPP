/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:54:09 by codekiwi          #+#    #+#             */
/*   Updated: 2024/09/20 16:01:17 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	int		nbBalls = 42;
	int*	ballsPtr = &nbBalls;
	int&	ballsRef = nbBalls;

	std::cout << nbBalls << " - " << *ballsPtr << " - " << ballsRef << std::endl;
	*ballsPtr = 21;
	std::cout << nbBalls << std::endl;
	ballsRef = 84;
	std::cout << nbBalls << std::endl;

	return (0);
}

/**
 * NOTES:
 * - a reference is "a pointer, constant, always dereferenced and never NULL"
 * - we cannot change the target of a reference => sort of constant pointer
 * - it is impossible to declare a reference without initializing it => a reference cannot point to nothing
 */