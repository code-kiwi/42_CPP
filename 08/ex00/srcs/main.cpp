/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/19 01:27:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

template<typename T>
void printContainer(const T& container) {
    std::cout << "Container's content : ";
    for (typename T::const_iterator it = container.begin(); it != container.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(void) {
    // Test with a list
    {
        std::cout << "TEST WITH LIST" << std::endl;
        std::list<int> lst1;

        lst1.push_back(12);
        lst1.push_back(24);
        lst1.push_back(36);
        printContainer(lst1);
        std::list<int>::const_iterator it = easyfind(lst1, 12);
        if (it == lst1.end()) {
            std::cout << "Element not found" << std::endl;
        } else {
            std::cout << "Element found : " << *it << std::endl;
        }
        it = easyfind(lst1, 53);
        if (it == lst1.end()) {
            std::cout << "Element not found" << std::endl;
        } else {
            std::cout << "Element found : " << *it << std::endl;
        }
    }
    std::cout << std::endl << "********************" << std::endl;

    // Test with a Vector
    {
        std::cout << "TEST WITH VECTOR" << std::endl;
        std::vector<int> vect;

        vect.push_back(101);
        vect.push_back(102);
        vect.push_back(103);
        vect.push_back(-85);
        printContainer(vect);
        std::vector<int>::const_iterator it = easyfind(vect, 101);
        if (it == vect.end()) {
            std::cout << "Element not found" << std::endl;
        } else {
            std::cout << "Element found : " << *it << std::endl;
        }
        it = easyfind(vect, 1);
        if (it == vect.end()) {
            std::cout << "Element not found" << std::endl;
        } else {
            std::cout << "Element found : " << *it << std::endl;
        }
    }

    return 0;
}
