/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/06/02 16:23:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cmath>

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
    }
    
    nb = strtod(toConvert.c_str(), &ptrToConvert);
    // Checks if the input is not a valid number
    if (isChar || toConvert.length() == 0 || (*ptrToConvert != 0 && (*ptrToConvert != 'f' || *(ptrToConvert + 1) != 0))) {
        isValidNumber = false;
    }

    // std::cout << "isChar: " << isChar << std::endl;
    // std::cout << "isNumber: " << isValidNumber << std::endl;
    // std::cout << "Static Method, to convert: " << toConvert << std::endl;
    // std::cout << "nb: " << nb << std::endl;
    // std::cout << "STR: \"" << ptrToConvert << "\"" << std::endl;
    // std::cout << "Is Inf: " << std::isinf(nb) << std::endl;
    // std::cout << "Is Nan: " << std::isnan(nb) << std::endl;
    ScalarConverter::_printAsChar(nb, isChar, isValidNumber);
    ScalarConverter::_printAsInt(nb, isValidNumber);
    ScalarConverter::_printAsFloat(nb, isValidNumber);
    ScalarConverter::_printAsDouble(nb, isValidNumber);
}

void ScalarConverter::_printAsChar(const double nb, const bool isChar, const bool isValidNumber) {
    (void) nb;
    (void) isChar;
    (void) isValidNumber;
    std::cout << "char: ";

    std::cout << std::endl;
}

void ScalarConverter::_printAsInt(const double nb, const bool isValidNumber) {
    (void) nb;
    (void) isValidNumber;
    std::cout << "int: ";

    std::cout << std::endl;
}

void ScalarConverter::_printAsFloat(const double nb, const bool isValidNumber) {
    (void) nb;
    (void) isValidNumber;
    std::cout << "float: ";

    std::cout << std::endl;
}

void ScalarConverter::_printAsDouble(const double nb, const bool isValidNumber) {
    (void) nb;
    (void) isValidNumber;
    std::cout << "double: ";

    std::cout << std::endl;
}
