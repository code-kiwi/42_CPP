/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:38:49 by mhotting          #+#    #+#             */
/*   Updated: 2025/01/24 23:20:01 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory Address of str: " << &str << std::endl;
    std::cout << "Memory Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory Address held by stringREF: " << &stringREF << std::endl;

    return 0;
}