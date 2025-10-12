/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 22:52:08 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/12 17:25:21 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <limits>

#include "BitcoinExchange.hpp"
#include "utils.hpp"

void BitcoinExchange::parseInputFile(const std::string &fileName, const BitcoinHistory &history) {
    std::ifstream file(fileName.c_str());
    std::string line;

    if (!file.is_open()) {
        throw std::runtime_error("Could not open input file: " + fileName);
    }

    // First line check
    std::getline(file, line);
    if (file.fail() && !file.eof()) {
        throw std::runtime_error("Input file reading failed for first line");
    }
    trimStr(line);
    if (!line.empty() && line != "date | value") {
        std::cout << "Error: bad header line => " << line << std::endl;
    }

    // Loop through the given file lines
    while (std::getline(file, line)) {
        trimStr(line);
        if (line.empty()) {
            continue;
        }
        BitcoinExchange::handleInputLine(line, history);
    }

    // File final check
    if (file.fail() && !file.eof()) {
        throw std::runtime_error("Input file reading encountered an error");
    }
    file.close();
}

void BitcoinExchange::handleInputLine(const std::string &line, const BitcoinHistory &history) {
    std::string key, valueStr;

    // Split the line and validate its syntax
    try {
        splitKeyValue('|', line, key, valueStr);
    } catch (const std::exception &e) {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }

    // Validate the extracted date
    if (!isStringDateValid(key)) {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }

    // Get given value as double and validate it
    double value = 0;
    try {
        value = stringToDouble(valueStr);
    } catch (const std::exception &e) {
        std::cout << "Error: bad value => " << valueStr << std::endl;
        return;
    }
    if (value < 0) {
        std::cout << "Error: not a positive number." << std::endl;
        return;
    } else if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return;
    }

    // Get bitcoin amout at the given date
    try {
        const double bitcoinUnitValue = history.getValueForDate(key);
        std::cout << key << " => " << valueStr << " = " << value * bitcoinUnitValue << std::endl;

    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}
