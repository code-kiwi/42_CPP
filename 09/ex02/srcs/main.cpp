/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/13 11:05:56 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <vector>

double stringToDouble(const std::string &str) {
    std::istringstream iss(str);
    double res;
    char extra;

    if (!(iss >> res)) {
        throw std::runtime_error("Invalid number format " + str);
    }
    if (iss >> extra) {
        throw std::runtime_error("Extra characters after number" + str);
    }
    return res;
}

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

void trimLeftStr(std::string &s) {
    if (s.length() == 0) {
        return;
    }
    size_t start = 0;
    while (isspace(s[start])) {
        start++;
    }
    s = s.substr(start);
}

void parseArg(std::vector<int> &numbers, int argc, char **argv) {
    (void)numbers;
    (void)argc;
    (void)argv;
}

void parseArg(std::vector<int> &numbers, std::string args) {
    std::string nbStr;
    trimStr(args);
    while (args.length() != 0) {
        size_t index = args.find(' ');
        if (index == std::string::npos) {
            nbStr = args;
            args = "";
        } else {
            nbStr = args.substr(0, index);
            args = args.substr(index + 1);
        }

        trimLeftStr(args);
    }

    std::string nbStr;
    while (args.length() != 0) {
        trimStr(args);
        if (index == std::string::npos) {
            nbStr = args;
            args = "";
        } else {
            nbStr = args.substr(0, index);
            args = args.substr(index + 1);
        }

        std::cout << "nbStr: " + nbStr << std::endl;

        long nb = stringToDouble(nbStr);
        if (nb < 0 || nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max()) {
            throw std::runtime_error("Invalid parsed argument " + nbStr);
        }
        if (std::find(numbers.begin(), numbers.end(), static_cast<int>(nb)) != numbers.end()) {
            throw std::runtime_error("Duplicate element " + nbStr);
        }
        numbers.push_back(static_cast<int>(nb));
    }
}

int main(int argc, char **argv) {
    // No arg check
    if (argc == 1) {
        std::cerr
            << "Usage: ./PmergeMe <positive integers...>" << std::endl
            << "Examples:" << std::endl
            << "  ./PmergeMe 3 5 2 9 1" << std::endl
            << "  ./PmergeMe \"3 5 2 9 1\"" << std::endl;
        return 1;
    }

    // Parse and save args
    std::vector<int> numbers;
    try {
        if (argc == 2) {
            parseArg(numbers, argv[1]);
        } else {
            parseArg(numbers, argc, argv);
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    // Print parsed argument
    std::cout << " Numbers : ";
    for (std::vector<int>::const_iterator i = numbers.begin(); i != numbers.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    return 0;
}
