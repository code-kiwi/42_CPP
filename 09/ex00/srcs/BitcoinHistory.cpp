/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinHistory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:19:45 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/24 14:12:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinHistory.hpp"
#include "utils.hpp"

#include <fstream>
#include <iostream>
#include <stdexcept>

BitcoinHistory::BitcoinHistory(const std::string &filename) {
    std::ifstream file(filename.c_str());
    std::string line, key, value;

    if (!file.is_open()) {
        throw std::runtime_error("Impossible to open the given history file");
    }

    // First line check
    std::getline(file, line);
    if (file.bad()) {
        throw std::runtime_error("History file reading failed for first line");
    }
    trimStr(line);
    if (line != EXPECTED_FIRST_LINE) {
        throw std::runtime_error("History file's first line is incorrect");
    }

    // Extracting the map from the file
    while (std::getline(file, line)) {
        splitKeyValue(HISTORY_SEPARATOR, line, key, value);
        std::cout << "line : '" << line << "' - key : '" << key << "' - value : '" << value << "'" << std::endl;
    }
    if (file.bad()) {
        throw std::runtime_error("History file reading failed");
    }
    file.close();
}

BitcoinHistory::BitcoinHistory(const BitcoinHistory &other) {
    this->_content = other._content;
}

BitcoinHistory::~BitcoinHistory(void) {}

const BitcoinHistory &BitcoinHistory::operator=(const BitcoinHistory &other) {
    if (this != &other) {
        this->_content = other._content;
    }
    return *this;
}
