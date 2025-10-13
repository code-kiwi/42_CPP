/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:10:47 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/13 19:18:22 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

#include <algorithm>
#include <limits>
#include <sstream>
#include <stdexcept>

int Parser::stringToPositiveInt(const std::string &str) {
    if (str.empty()) {
        throw std::runtime_error("Empty string ton convert");
    }
    std::istringstream iss(str);
    long res;
    char extra;

    if (!(iss >> res)) {
        throw std::runtime_error("Invalid number format " + str);
    }
    if (iss >> extra) {
        throw std::runtime_error("Extra characters after number " + str);
    }
    if (res < 0 || res > std::numeric_limits<int>::max()) {
        throw std::runtime_error("Invalid parsed argument " + str);
    }

    return static_cast<int>(res);
}

void Parser::trimStr(std::string &s) {
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

void Parser::trimLeftStr(std::string &s) {
    if (s.empty()) {
        return;
    }
    size_t start = 0;
    while (start < s.length() && isspace(s[start])) {
        start++;
    }
    s = s.substr(start);
}

void Parser::parseArg(std::vector<int> &numbers, int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        std::string nbStr(argv[i]);
        trimStr(nbStr);

        // Convert to int, validate and save
        int nb = stringToPositiveInt(nbStr);
        if (std::find(numbers.begin(), numbers.end(), nb) != numbers.end()) {
            throw std::runtime_error("Duplicate element " + nbStr);
        }
        numbers.push_back(nb);
    }
}

void Parser::parseArg(std::vector<int> &numbers, std::string args) {
    trimStr(args);
    while (args.length() != 0) {
        std::string nbStr;

        // Extract the substr to convert
        size_t index = args.find(' ');
        if (index == std::string::npos) {
            nbStr = args;
            args = "";
        } else {
            nbStr = args.substr(0, index);
            args = args.substr(index + 1);
        }

        // Convert to int, validate and save
        int nb = stringToPositiveInt(nbStr);
        if (std::find(numbers.begin(), numbers.end(), nb) != numbers.end()) {
            throw std::runtime_error("Duplicate element " + nbStr);
        }
        numbers.push_back(nb);

        trimLeftStr(args);
    }
}
