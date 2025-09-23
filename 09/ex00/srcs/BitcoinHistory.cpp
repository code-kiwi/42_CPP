/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinHistory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:19:45 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/23 22:43:06 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinHistory.hpp"
#include "utils.hpp"

#include <fstream>
#include <iostream>

BitcoinHistory::BitcoinHistory(const std::string &filename) {
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file.is_open()) {
        throw std::runtime_error("Impossible to open the given history file");
    }
    while (std::getline(file, line)) {
        size_t index;
        trimStr(line);
        
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
