/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:48:24 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/30 11:27:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter {
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter&);
        ScalarConverter& operator=(const ScalarConverter&);

        static void _printAsChar(const char c);
        static void _printAsInt(const double nb);
        static void _printAsFloat(const double nb);
        static void _printAsDouble(const double nb);
    public:
        ~ScalarConverter(void);

        static void convert(const std::string& toConvert);
};

#endif
