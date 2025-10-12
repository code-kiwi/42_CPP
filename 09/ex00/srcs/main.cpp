/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/12 14:36:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "BitcoinHistory.hpp"
#include "utils.hpp"

#include <iostream>
#include <string>

int main(int argc, char **argv) {
    // Chekc argc
    if (argc != 2) {
        std::cout << "Usage: ./btc <input_file>" << std::endl;
        return 1;
    }

    // Parse the database
    BitcoinHistory hist;
    try {
        hist.parseInputFile(HISTORY_FILENAME);
    } catch (const std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
        return 1;
    }

    // Handle input file and display the result
    const std::string inputFileName = argv[1];
    try {
        BitcoinExchange::parseInputFile(inputFileName, hist);
    } catch (const std::exception &e) {
        std::cout << "Error : " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
