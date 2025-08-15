/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:41:44 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/15 12:25:39 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vertex.class.tpp"

int main(void) {
    Vertex<int> v1(12, 23, 34);
    Vertex<> v2(12.42, 23.42, 34.42);
    Vertex<> v3(1, 2, 3);

    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v3 << std::endl;

    return 0;
}


/**
 * NOTES :
 * - file .tpp for template classes
 */