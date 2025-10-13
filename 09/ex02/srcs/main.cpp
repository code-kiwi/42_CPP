/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/13 19:09:34 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

#include <iostream>
#include <stdexcept>
#include <vector>

int main(int argc, char **argv) {
    // No arg check
    if (argc == 1) {
        std::cerr
            << "Usage: ./PmergeMe <positive integers...>" << std::endl
            << "Examples:" << std::endl
            << "  ./PmergeMe 3 5 2 9 1" << std::endl
            << "  ./PmergeMe \"3 5 2 9 1\"" << std::endl;
        return 1;
    }

    // Parse and save args
    std::vector<int> numbers;
    try {
        if (argc == 2) {
            Parser::parseArg(numbers, argv[1]);
        } else {
            Parser::parseArg(numbers, argc, argv);
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    // Print parsed argument
    std::cout << " Numbers : ";
    for (std::vector<int>::const_iterator i = numbers.begin(); i != numbers.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    return 0;
}
