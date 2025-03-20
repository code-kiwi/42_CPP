/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:04:53 by mhotting          #+#    #+#             */
/*   Updated: 2025/03/20 18:10:59 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Cat {
    public:
        class Leg {
            // ...
        };
};

class Dog {
    public:
        class Leg {
            // ...
        };
};

int main(void) {
    Cat someCat;
    Cat::Leg someCatLeg;
    std::cout << "Hello Nested classes" << std::endl;
    return 0;
}
