/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/06/03 13:44:42 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <cerrno>

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {
    return *this;
}

ScalarConverter::~ScalarConverter(void) {}

void ScalarConverter::convert(const std::string& toConvert) {
    char* ptrToConvert = NULL;
    bool isChar = false;
    bool isValidNumber = true;
    double nb = 0;

    // Checks if there is only one char to convert
    if (toConvert.length() == 1 && !std::isdigit(toConvert[0])) {
        isChar = true;
        nb = static_cast<char>(toConvert[0]);
        isValidNumber = false;
    } else {
        errno = 0;
        nb = strtod(toConvert.c_str(), &ptrToConvert);
        // Checks if the input is not a valid number
        if (errno != 0 || toConvert.length() == 0 || (*ptrToConvert != 0 && (*ptrToConvert != 'f' || *(ptrToConvert + 1) != 0))) {
            isValidNumber = false;
        }
    }

    ScalarConverter::_printAsChar(nb, isChar, isValidNumber);
    ScalarConverter::_printAsInt(nb, isValidNumber);
    ScalarConverter::_printAsFloat(nb, isValidNumber);
    ScalarConverter::_printAsDouble(nb, isValidNumber);
}

void ScalarConverter::_printAsChar(const double nb, const bool isChar, const bool isValidNumber) {
    std::cout << "char: ";
    if ((!isChar && !isValidNumber) || std::isnan(nb) || nb < std::numeric_limits<char>::min() || nb > std::numeric_limits<char>::max()) {
        std::cout << "impossible" << std::endl;
        return;
    }
    char c = static_cast<char>(nb);
    if (!std::isprint(c)) {
        std::cout << "Non displayable" << std::endl;
        return;
    }
    std::cout << c << std::endl;
}

void ScalarConverter::_printAsInt(const double nb, const bool isValidNumber) {
    std::cout << "int: ";
    if (!isValidNumber || std::isnan(nb) || nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max()) {
        std::cout << "impossible" << std::endl;
        return;
    }
    std::cout << static_cast<int>(nb) << std::endl;
}

void ScalarConverter::_printAsFloat(const double nb, const bool isValidNumber) {
    std::cout << "float: ";
    if (!isValidNumber || (!std::isinf(nb) && (nb < -std::numeric_limits<float>::max() || nb > std::numeric_limits<float>::max()))) {
        std::cout << "impossible" << std::endl;
        return;
    }
    std::cout << std::fixed << std::setprecision(1) << static_cast<float>(nb) << 'f' << std::endl;
}

void ScalarConverter::_printAsDouble(const double nb, const bool isValidNumber) {
    std::cout << "double: ";
    if (!isValidNumber) {
        std::cout << "impossible" << std::endl;
        return;
    }
    std::cout << std::fixed << std::setprecision(1) << nb << std::endl;
}
