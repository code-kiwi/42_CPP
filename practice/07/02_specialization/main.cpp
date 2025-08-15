/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:41:39 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/15 13:57:49 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pair.class.tpp"

int main(void) {
    Pair<float, float> p1(2.42f, 3.42f);
    Pair<int, float> p2(42, 3.42f);
    Pair<bool, bool> p3(true, false);
    Pair<std::string, float> p4("Pi", 3.14f);
    Pair<float, bool> p5(4.2f, true);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;
    std::cout << p5 << std::endl;

    return 0;
}

/**
 * NOTES :
 * - do not use reference to store simple values ! (explains the bug with p1 and p2) => undefined behaviour
 */