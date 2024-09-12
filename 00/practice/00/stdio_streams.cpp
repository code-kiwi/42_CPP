/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_streams.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:58:21 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 14:16:17 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    char    buff[512];

    std::cout << "Hello World !" << std::endl;

    std::cout << "Input a word: ";
    std::cin >> buff;
    std::cout << "You entered: [" << buff << "]" << std::endl;
    return (0);
}

/**
 * NOTES:
 * - using `cin` and `cout` will help us to easily pick program input and output
 * - `std::endl` enables to unify the different line breaks (abstraction)
 */