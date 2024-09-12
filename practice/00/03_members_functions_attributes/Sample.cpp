/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:21:23 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 17:40:56 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(void) {
    std::cout << "Sample Constructor called" << std::endl;

    this->foo_private = 42;
    this->foo = 41;

    this->bar();
    
    return ;
}

Sample::~Sample(void) {
    std::cout << "Sample Destructor called..." << std::endl;
    return ;
}

void    Sample::bar(void) {
    std::cout << "Member function bar called" << std::endl;
    return ;
}
