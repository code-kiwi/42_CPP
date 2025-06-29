/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/06/29 15:50:56 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void) {
    Base b;
    A a;
    std::cout << "Hello" << std::endl;

    srand(time(NULL));
    int nb = rand() % 3;
    std::cout << "RANDOM: " << nb << std::endl;

    return 0;
}

Base* generate(void) {

    return 0;
}

void identify(Base* p) {
    if (p == NULL)
        return;
    return;
}

