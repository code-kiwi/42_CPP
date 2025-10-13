/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:10:47 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/14 01:00:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <cctype>
#include <limits>
#include <sstream>
#include <stdexcept>

template <typename Container>
int Parser<Container>::stringToPositiveInt(const std::string &str) {
    if (str.empty()) {
        throw std::runtime_error("Empty string to convert");
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

template <typename Container>
void Parser<Container>::trimStr(std::string &s) {
    if (s.empty()) {
        return;
    }
    size_t start = 0, end = s.length() - 1;
    while (start < s.length() && std::isspace(static_cast<unsigned char>(s[start]))) {
        start++;
    }
    if (start == s.length()) {
        s.clear();
        return;
    }
    while (end > start && std::isspace(static_cast<unsigned char>(s[end]))) {
        end--;
    }
    s = s.substr(start, end - start + 1);
}

template <typename Container>
void Parser<Container>::trimLeftStr(std::string &s) {
    if (s.empty()) {
        return;
    }
    size_t start = 0;
    while (start < s.length() && std::isspace(static_cast<unsigned char>(s[start]))) {
        start++;
    }
    s = s.substr(start);
}

template <typename Container>
void Parser<Container>::convertAndInsert(Container &numbers, const std::string &nbStr) {
    int nb = stringToPositiveInt(nbStr);
    numbers.push_back(nb);
}

template <typename Container>
void Parser<Container>::parseArg(Container &numbers, int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        std::string nbStr(argv[i]);
        trimStr(nbStr);
        if (nbStr.empty()) {
            throw std::runtime_error("Parser found an empty element");
        }
        convertAndInsert(numbers, nbStr);
    }
}

template <typename Container>
void Parser<Container>::parseArg(Container &numbers, std::string args) {
    trimStr(args);
    if (args.empty()) {
        throw std::runtime_error("Parser found an empty element");
    }
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
        convertAndInsert(numbers, nbStr);
        trimLeftStr(args);
    }
}
