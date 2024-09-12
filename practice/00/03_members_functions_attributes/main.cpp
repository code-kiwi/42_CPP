/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:16:33 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 17:43:59 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

int main(void) {
    Sample  instance;
    std::cout << "instance.foo: " << instance.foo << std::endl;
    instance.bar();
    return (0);
}

/**
 * NOTES:
 * - constructors and destructors (in CPP) have no return type
 * - we can define functions (methods) and variables (attributes) 'into' a class
 */
