/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:16:12 by mhotting          #+#    #+#             */
/*   Updated: 2025/07/28 19:31:43 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T max(const T& x, const T& y) {
    return (x >= y ? x : y);
}

template <typename T>
T min(const T& x, const T&y) {
    return (x <= y ? x : y);
}

int foo(int x) {
    std::cout <<  "Long computing time..." << std::endl;
    return x;
}

int main(void) {
    /* TEST00: INT */
    int a = 21, b = 42;

    // Explicit instanciation
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl;
    // Implicit instanciation
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max(a, b) << std::endl;

    /* ************************* */
    std::cout << std::endl;
    /* ************************* */

    /* TEST01: FLOAT */
    float c = 4.2f, d = 2.1f;

    // Explicit instanciation
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl;
    // Implicit instanciation
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max(c, d) << std::endl;

    /* ************************* */
    std::cout << std::endl;
    /* ************************* */

    /* TEST02: CHAR */
    char e = 'x', f = 'z';

    // Explicit instanciation
    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max<char>(e, f) << std::endl;
    // Implicit instanciation
    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max(e, f) << std::endl;

    /* ************************* */
    std::cout << std::endl;
    /* ************************* */

    /* TEST03: OLD PROBLEM WITH C MACROS */
    int ret = max<int>(foo(a), foo(b));
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << ret << std::endl;

    /* ************************* */
    std::cout << std::endl;
    /* ************************* */

    return 0;
}