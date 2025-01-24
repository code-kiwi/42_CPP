/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:50:46 by codekiwi          #+#    #+#             */
/*   Updated: 2025/01/16 18:00:06 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv) {
    std::string str;

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++) {
        str = argv[i];
        const size_t    strLen = str.length();
        for (size_t j = 0; j < strLen; j++) {
            str[j] = std::toupper(str[j]);
        }
        std::cout << str;
    }
    std::cout << std::endl;
    return (0);
}
