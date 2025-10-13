/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:09:12 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/13 19:19:15 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

#include <cctype>
#include <cstdlib>
#include <sstream>
#include <stdexcept>

void trimStr(std::string &s) {
    if (s.empty()) {
        return;
    }
    size_t start = 0, end = s.length() - 1;
    while (start < s.length() && isspace(s[start])) {
        start++;
    }
    if (start == s.length()) {
        s.clear();
        return;
    }
    while (end > start && isspace(s[end])) {
        end--;
    }
    s = s.substr(start, end - start + 1);
}

void splitKeyValue(char sep, const std::string &str, std::string &key, std::string &value) {
    size_t index = str.find(sep);
    if (index == std::string::npos) {
        throw std::runtime_error("Seperator not found in " + str);
    }
    key = str.substr(0, index);
    trimStr(key);
    value = str.substr(index + 1);
    trimStr(value);
    if (key.empty() || value.empty()) {
        throw std::runtime_error("Empty key or value in " + str);
    }
}

bool isStringDateValid(const std::string &str) {
    // Len validation
    if (str.length() != 10) {
        return false;
    }

    // Content structure validation
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
    return isDateValid(std::atoi(str.substr(0, 4).c_str()), std::atoi(str.substr(5, 2).c_str()), std::atoi(str.substr(8, 2).c_str()));
}

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

bool isDateValid(const int year, const int month, const int day) {
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeap(year)) {
        daysInMonth[FEB] = 29;
    }
    return day <= daysInMonth[month];
}

double stringToDouble(const std::string &str) {
    std::istringstream iss(str);
    double res;
    char extra;

    if (!(iss >> res)) {
        throw std::runtime_error("Invalid number format " + str);
    }
    if (iss >> extra) {
        throw std::runtime_error("Extra characters after number " + str);
    }
    return res;
}
