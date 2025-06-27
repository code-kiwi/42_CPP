/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/06/28 01:53:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

#include "Data.hpp"
#include "Serializer.hpp"

int main(void) {
    Data d1("Robert", 12);
    Data d2;
    Data d3(d1);
    Data *d1Ptr, *d2Ptr, *d3Ptr;
    Data* restored;
    uintptr_t ptrInt;
    Data* d0Ptr;

    std::cout << std::endl;

    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;
    std::cout << d3 << std::endl;
    std::cout << std::endl;

    d1Ptr = &d1;
    std::cout << "d1Ptr: " << d1Ptr << std::endl;
    ptrInt = Serializer::serialize(d1Ptr);
    std::cout << "d1Ptr serialized: " << ptrInt << std::endl;
    restored = Serializer::deserialize(ptrInt);
    std::cout << "d1 deserialized: " << *restored << std::endl;
    std::cout << std::endl;

    d2Ptr = &d2;
    std::cout << "d2Ptr: " << d2Ptr << std::endl;
    ptrInt = Serializer::serialize(d2Ptr);
    std::cout << "d2Ptr serialized: " << ptrInt << std::endl;
    restored = Serializer::deserialize(ptrInt);
    std::cout << "d2 deserialized: " << *restored << std::endl;
    std::cout << std::endl;

    d3Ptr = &d3;
    std::cout << "d3Ptr: " << d3Ptr << std::endl;
    ptrInt = Serializer::serialize(d3Ptr);
    std::cout << "d3Ptr serialized: " << ptrInt << std::endl;
    restored = Serializer::deserialize(ptrInt);
    std::cout << "d3 deserialized: " << *restored << std::endl;
    std::cout << std::endl;

    d0Ptr = 0;
    std::cout << "d0Ptr: " << d0Ptr << std::endl;
    ptrInt = Serializer::serialize(d0Ptr);
    std::cout << "d0Ptr serialized: " << ptrInt << std::endl;
    restored = Serializer::deserialize(ptrInt);
    if (restored == 0) {
        std::cout << "d0 deserialized is NULL" << std::endl;
    } else {
        std::cout << "d0 deserialized: " << *restored << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
