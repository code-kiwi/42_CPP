/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinHistory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:19:45 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/24 18:58:11 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinHistory.hpp"
#include "utils.hpp"

#include <fstream>
#include <iostream>
#include <limits>
#include <stdexcept>

BitcoinHistory::BitcoinHistory(const std::string &filename) {
    std::ifstream file(filename.c_str());
    std::string line, key, valueStr;
    double value;

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
        splitKeyValue(HISTORY_SEPARATOR, line, key, valueStr);
        if (!isStringDateValid(key)) {
            throw std::runtime_error("Invalid date provided " + key);
        }
        value = stringToDouble(valueStr);
        if (value < 0 || value > std::numeric_limits<int>::max()) {
            throw std::runtime_error("Wrong bitcoin value given " + valueStr);
        }
        this->_content[key] = value;
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

const std::map<std::string, double> &BitcoinHistory::getContent(void) const {
    return this->_content;
}

std::ostream &operator<<(std::ostream &o, const BitcoinHistory &bcHist) {
    const std::map<std::string, double> &content = bcHist.getContent();

    o << "Bitcoin History : ";
    for (std::map<std::string, double>::const_iterator it = content.begin(); it != content.end(); it++) {
        o << "<" << it->first << ", " << it->second << "> ";
    }
    return o;
}
