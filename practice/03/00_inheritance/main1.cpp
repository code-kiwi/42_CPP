/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:39:20 by mhotting          #+#    #+#             */
/*   Updated: 2025/02/10 20:36:59 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Cat {
    private:
        int _numberOfLegs;

    public:
        Cat(void);
        Cat(const Cat& cat);
        Cat& operator=(const Cat& cat);
        ~Cat(void);

        void run(int distance);

        void scornSomeone(const std::string& target);
};

class Pony {
    private:
        int _numberOfLegs;

    public:
        Pony(void);
        Pony(const Pony& pony);
        Pony& operator=(const Pony& pony);
        ~Pony(void);

        void run(int distance);

        void doMagic(const std::string& target);
};

int main(void) {
    std::cout << "TEST" << std::endl;
    return 0;
}