/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 14:27:23 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/15 14:41:08 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& t1, T& t2) {
    T temp = t2;
    t2 = t1;
    t1 = temp;
}

template<typename T>
const T& min(const T& t1, const T& t2) {
    return t1 < t2 ? t1 : t2;
}

template<typename T>
const T& max(const T& t1, const T& t2) {
    return t1 > t2 ? t1 : t2;
}

#endif
