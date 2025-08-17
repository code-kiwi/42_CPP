/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 23:46:00 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/17 20:20:24 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T* array, size_t len, void (*func)(T&)) {
    for (size_t i = 0; i < len; i++) {
        func(array[i]);
    }
}

template<typename T>
void iter(const T* array, size_t len, void (*func)(const T&)) {
    for (size_t i = 0; i < len; i++) {
        func(array[i]);
    }
}

#endif
