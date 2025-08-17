/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/17 20:27:01 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void print_element1(T& elt) {
    std::cout << "Element: " << elt << std::endl;
}

template<typename T>
void print_element2(const T& elt) {
    std::cout << "Element: " << elt << std::endl;
}

void printUpperCase1(std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
    }
    std::cout << std::endl;
}

void printUpperCase2(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
    }
    std::cout << std::endl;
}

int main(void) {
    std::string array1[] = {"Hello", "please", "uppercase", "me"};
    const std::string array2[] = {"Hi", "I", "am", "const"};
    iter(array1, 4, printUpperCase1);
    std::cout << std::endl;
    iter(array2, 4, printUpperCase2);
    std::cout << std::endl;
    iter(array1, 4, &print_element1<std::string>);
    std::cout << std::endl;
    iter(array2, 4, &print_element2<std::string>);
    std::cout << std::endl;

    return 0;
}
