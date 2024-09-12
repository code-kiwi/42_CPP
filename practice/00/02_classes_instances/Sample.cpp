/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:21:23 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 14:31:24 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"

Sample::Sample(void) {
    std::cout << "Sample Constructor called" << std::endl;
    return ;
}

Sample::~Sample(void) {
    std::cout << "Sample Destructor called..." << std::endl;
    return ;
}
