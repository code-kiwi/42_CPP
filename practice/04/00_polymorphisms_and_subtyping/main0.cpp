/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:33:32 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/20 17:45:19 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character {
    public:
        void sayHello(const std::string& target) {
            std::cout << "Character says hello to " << target << "!" << std::endl;
        }
};

class Warrior: public Character {
    public:
        void sayHello(const std::string& target) {
            std::cout << "Warrior says hello to " << target << "!" << std::endl;
        }
};

int main(void) {
    Warrior* a = new Warrior();     // Ok, obviously
    Character *b = new Warrior();   // Still ok, a warrior is a character
    //Warrior *c = new Character(); // Would not be ok, a character is not a warrior

    a->sayHello("Bob");
    b->sayHello("CaptainBob");

    delete a;
    delete b;

    return 0;
}
