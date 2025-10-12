/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:25:14 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/12 14:54:30 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

#define HISTORY_FILENAME "./assets/dataTest.csv"
#define EXPECTED_FIRST_LINE "date,exchange_rate"
#define HISTORY_SEPARATOR ','

enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

void trimStr(std::string &s);
void splitKeyValue(char sep, const std::string &str, std::string &key, std::string &value);
bool isStringDateValid(const std::string &str);
bool isDateValid(const int year, const int month, const int day);
bool isLeap(int year);
double stringToDouble(const std::string &str);

#endif