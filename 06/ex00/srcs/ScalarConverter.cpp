/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/30 15:22:42 by mhotting         ###   ########.fr       */
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
    char* ptrToConvert;

    std::cout << "Static Method, to convert: " << toConvert << std::endl;
    double nb = strtod(toConvert.c_str(), &ptrToConvert);
    std::cout << "nb: " << nb << std::endl;
    std::cout << "STR: \"" << ptrToConvert << "\"" << std::endl;
    std::cout << "Is Inf: " << std::isinf(nb) << std::endl;
    std::cout << "Is Nan: " << std::isnan(nb) << std::endl;
}

void ScalarConverter::_printAsChar(const char c) {
    (void) c;
}

void ScalarConverter::_printAsInt(const double nb) {
    (void) nb;
}

void ScalarConverter::_printAsFloat(const double nb) {
    (void) nb;
}

void ScalarConverter::_printAsDouble(const double nb) {
    (void) nb;
}
