/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:09:12 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/23 20:34:55 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

#include <cctype>


#include <iostream>
void trimStr(std::string &s) {
    if (s.length() == 0) {
        return;
    }
    size_t start = 0, end = s.length() - 1;
    while (isspace(s[start])) {
        start++;
    }
    while (isspace(s[end])) {
        end--;
    }
    s = s.substr(start, end - start + 1);

}