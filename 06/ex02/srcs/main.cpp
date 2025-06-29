/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/06/29 23:10:32 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void) {
    Base* p;

    srand(time(NULL));
    p = generate();
    identify(p);
    identify(*p);

    delete p;
    return 0;
}

Base* generate(void) {
    int randNb;

    randNb = rand() % 3;
    if (randNb == 0) {
        return static_cast<Base*>(new A());
    } else if (randNb == 1) {
        return static_cast<Base*>(new B());
    } else {
        return static_cast<Base*>(new C());
    }
}

void identify(Base* p) {
    std::cout << "Identification pointer: ";

    if (p == NULL) {
        std::cout << "NULL pointer";
    } else if (dynamic_cast<A*>(p)) {
        std::cout << "A pointer";
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B pointer";
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C pointer";
    } else {
        std::cout << "Unknown pointer";
    }

    std::cout << std::endl;
    return;
}

void identify(Base& p) {
    std::cout << "Identification reference: ";

    try {
        dynamic_cast<A&>(p);
        std::cout << "A reference" << std::endl;
        return ;
    } catch (...) {}

    try {
        dynamic_cast<B&>(p);
        std::cout << "B reference" << std::endl;
        return ;
    } catch (...) {}

    try {
        dynamic_cast<C&>(p);
        std::cout << "C reference" << std::endl;
        return ;
    } catch (...) {}

    std::cout << "Unknown reference";
}
