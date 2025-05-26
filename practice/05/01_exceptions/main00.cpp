/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:34:27 by mhotting          #+#    #+#             */
/*   Updated: 2025/05/26 23:01:53 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

void test1(int num) {
    try {
        std::cout << "The number is " << num << std::endl;
        if (num < 0) {
            throw std::exception();
        } else {
            std::cout << "It is positive" << std::endl;
        }
    } catch (std::exception e) {
        std::cout << "ERROR: It is negative" << std::endl;
    }
}

void test2(int num) {
    std::cout << "The number is " << num << std::endl;
    if (num < 0) {
        throw std::exception();
    } else {
        std::cout << "It is positive" << std::endl;
    }
}

void test3(int num) {
    try {
        test2(num);
    } catch (std::exception& e) {
        std::cout << "ERROR: It is negative" << std::endl;
    }
}

void test4(int num) {
    class PEBKACException: public std::exception {
        public:
            virtual const char* whate() const throw() { // We can specify the exceptions a method can throw
                return ("Problem exists between keyboard and chair");
            }
    };

    try {
        test3(num);
    } catch (PEBKACException& e) {
        std::cout << "The user is an idiot" << std::endl;
    } catch (std::exception& e) {
        std::cout << "ERROR: It is negative" << std::endl;
    }
}

int main(void) {
    test1(50);
    test1(-50);
    test3(1);
    test3(-1);
    return 0;
}

/**
 * - Exceptions have a cost, we should not use them for handling every error
 * => it is still relevant to use a return value for handling errors when writing functions
 */