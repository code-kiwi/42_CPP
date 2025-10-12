/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 22:51:36 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/12 23:32:09 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>
#include <limits>
#include <stack>
#include <stdexcept>

int RPNCalculator::execute(const std::string &input) {
    std::stack<int> numbers;

    for (size_t i = 0; i < input.length(); i++) {
        char c = input[i];

        // Skip spaces
        if (isspace(c)) {
            continue;
        }

        // Validate current char
        if (!isOp(c) && !isdigit(c)) {
            throw std::runtime_error(std::string("Error: invalid char '") + c + "'");
        }

        // Handle digit or op
        if (isdigit(c)) {
            numbers.push(c - '0');
        } else if (RPNCalculator::isOp(c)) {
            if (numbers.size() < 2) {
                throw std::runtime_error("Error: not enough operands");
            }
            int b = numbers.top();
            numbers.pop();
            int a = numbers.top();
            numbers.pop();
            int res = RPNCalculator::applyOp(a, b, c);
            numbers.push(res);
        }

        // Check space seperation
        if (i + 1 < input.length() && !isspace(input[i + 1])) {
            throw std::runtime_error(std::string("Error: token '") + c + "' must be followed by a space");
        }
    }

    // Check only result in the stack
    if (numbers.size() != 1) {
        throw std::runtime_error("Error: malformed expression");
    }

    return numbers.top();
}

bool RPNCalculator::isOp(char c) {
    return (c == OP_PLUS || c == OP_MINUS || c == OP_MUL || c == OP_DIV);
}

int RPNCalculator::applyOp(int a, int b, char op) {
    long res;

    switch (op) {
    case OP_PLUS:
        res = static_cast<long>(a) + static_cast<long>(b);
        break;

    case OP_MINUS:
        res = static_cast<long>(a) - static_cast<long>(b);
        break;

    case OP_MUL:
        res = static_cast<long>(a) * static_cast<long>(b);
        break;

    case OP_DIV:
        if (b == 0) {
            throw std::runtime_error("Error: division by zero forbidden");
        }
        res = static_cast<long>(a) / static_cast<long>(b);
        break;

    default:
        throw std::runtime_error(std::string("Error: invalid operator '") + op + "'");
    }

    // Check that the result is an integer
    if (res < std::numeric_limits<int>::min() || res > std::numeric_limits<int>::max()) {
        throw std::runtime_error("Error: result is out of integer range");
    }

    return static_cast<int>(res);
}
