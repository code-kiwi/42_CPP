/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/16 10:51:07 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"
#include "PmergeMe.hpp"

#include <ctime>
#include <deque>
#include <iomanip>
#include <iostream>
#include <set>
#include <stdexcept>
#include <vector>

template <typename T>
void printContainer(T &numbers) {
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i];
        if (i != numbers.size() - 1) {
            std::cout << " ";
        }
    }
}

template <typename T>
bool isSorted(T &v) {
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < v[i - 1])
            return false;
    }
    return true;
}

int main(int argc, char **argv) {
    /* ******************** */
    /* Init project */
    /* ******************** */
    if (argc == 1) {
        std::cerr
            << "Usage: ./PmergeMe <positive integers...>" << std::endl
            << "Examples:" << std::endl
            << "  ./PmergeMe 3 5 2 9 1" << std::endl
            << "  ./PmergeMe \"3 5 2 9 1\"" << std::endl;
        return 1;
    }
    std::vector<int> initialNumbers;
    try {
        if (argc == 2) {
            Parser<std::vector<int> >::parseArg(initialNumbers, argv[1]);
        } else {
            Parser<std::vector<int> >::parseArg(initialNumbers, argc, argv);
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    std::set<int> unique(initialNumbers.begin(), initialNumbers.end());
    if (unique.size() != initialNumbers.size()) {
        std::cerr << "Error: duplicate numbers detected." << std::endl;
        return 1;
    }

    /* ******************** */
    /* Vector */
    /* ******************** */
    clock_t startTimeVect = clock();
    std::vector<int> numbersVect;
    try {
        if (argc == 2) {
            Parser<std::vector<int> >::parseArg(numbersVect, argv[1]);
        } else {
            Parser<std::vector<int> >::parseArg(numbersVect, argc, argv);
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    PmergeMe::sortVector(numbersVect, 1);
    clock_t endTimeVect = clock();
    double timeVect = static_cast<double>(endTimeVect - startTimeVect) / CLOCKS_PER_SEC * 1000;

    /* ******************** */
    /* Deque */
    /* ******************** */
    clock_t startTimeDeque = clock();
    std::deque<int> numbersDeque;
    try {
        if (argc == 2) {
            Parser<std::deque<int> >::parseArg(numbersDeque, argv[1]);
        } else {
            Parser<std::deque<int> >::parseArg(numbersDeque, argc, argv);
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    PmergeMe::sortDeque(numbersDeque, 1);
    clock_t endTimeDeque = clock();
    double timeDeque = static_cast<double>(endTimeDeque - startTimeDeque) / CLOCKS_PER_SEC * 1000;

    /* ******************** */
    /* Control of sort validity */
    /* ******************** */
    if (!isSorted<std::vector<int> >(numbersVect) || !isSorted<std::deque<int> >(numbersDeque)) {
        std::cout << "Error: sorting process failed" << std::endl;
        return 1;
    }

    /* ******************** */
    /* Final print */
    /* ******************** */
    std::cout << "Before: ";
    printContainer<std::vector<int> >(initialNumbers);
    std::cout << std::endl;

    std::cout << "After: ";
    printContainer<std::vector<int> >(numbersVect);
    std::cout << std::endl;

    std::cout << "Time to process a range of " << numbersVect.size() << " elements with std::vector : " << std::fixed << std::setprecision(6) << timeVect << " ms" << std::endl;
    std::cout << "Time to process a range of " << numbersDeque.size() << " elements with std::deque :  " << std::fixed << std::setprecision(6) << timeDeque << " ms" << std::endl;

    return 0;
}
