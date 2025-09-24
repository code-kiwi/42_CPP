/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:09:12 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/24 14:49:57 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

#include <cctype>
#include <stdexcept>

void trimStr(std::string &s) {
    if (s.length() == 0) {
        return;
    }
    size_t start = 0, end = s.length() - 1;
    while (isspace(s[start])) {
        start++;
    }
    while (isspace(s[end])) {
        end--;
    }
    s = s.substr(start, end - start + 1);
}

void splitKeyValue(char sep, const std::string &str, std::string &key, std::string &value) {
    size_t index = str.find(sep);
    if (index == std::string::npos) {
        throw std::runtime_error("History file contains an incorrect line (seperator missing)");
    }
    key = str.substr(0, index);
    trimStr(key);
    value = str.substr(index + 1);
    trimStr(value);
}

bool isStringDateValid(const std::string &str) {
    // Len validation
    if (str.length() != 10) {
        return false;
    }

    // Content validation
    for (size_t i = 0; i < str.length(); i++) {
        if (i == 4 || i == 7) {
            if (str[i] != '-')
                return false;
            continue;
        }
        if (isdigit(str[i]))
            continue;
        return false;
    }

    // Date validation
    int year = std::atoi(str.substr(0, 4).c_str());
    int month = std::atoi(str.substr(5, 2).c_str());
    int day = std::atoi(str.substr(8, 2).c_str());
}

bool isDateValid(const int year, const int month, const int day) {
    if (
        year < 0 || year > 2025) {
        return false;
    }
    return true;
}

double stringToDouble(const std::string &str) {
}
