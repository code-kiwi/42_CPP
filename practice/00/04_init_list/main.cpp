/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:55:20 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/12 18:48:03 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sample.hpp"
#include "Sample2.hpp"

int main(void) {
    Sample instance1('a', 42, 4.2f);
    Sample2 instance2('b', 21, 8.4f);
    return (0);
}

/**
 * NOTES:
 * - both ways of initializing attributes are valid, but there are differences.
 * we will use init lists for the rest of this course (probably for inheritence?)
 */
