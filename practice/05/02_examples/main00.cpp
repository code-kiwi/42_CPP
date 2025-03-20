/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:32:33 by mhotting          #+#    #+#             */
/*   Updated: 2025/03/20 19:36:31 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class MyException: public std::exception {
    public:
        const char* what() const throw() {
            return "My custom exception";
        }

};

int main(void) {
    try {
        throw MyException();
    } catch (MyException& e) {
        std::cout << "Exception catched: " << e.what() << std::endl;
    }
    return 0;
}
