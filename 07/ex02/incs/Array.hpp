/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 00:49:13 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/18 02:00:11 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array& otherArray);
        ~Array(void);

        Array& operator=(const Array& otherArray);

        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        unsigned int size(void) const;

    private:
        unsigned int _size;
        T* _content;
};

#include "Array.tpp"

#endif
