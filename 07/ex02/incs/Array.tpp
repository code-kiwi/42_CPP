/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 00:53:22 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/18 02:03:39 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _size(0), _content(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _content(new T[n]) {}

template<typename T>
Array<T>::Array(const Array& otherArray)
    : _size(otherArray._size), _content(new T[otherArray._size]) {
    for (unsigned int i = 0; i < this->_size; i++) {
        this->_content[i] = otherArray._content[i];
    }
}

template<typename T>
Array<T>::~Array(void) {
    delete[] this->_content;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& otherArray) {
    if (this != &otherArray) {
        delete[] this->_content;
        this->_size = otherArray._size;
        this->_content = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++) {
            this->_content[i] = otherArray._content[i];
        }
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= this->_size) {
        throw std::out_of_range("Given index is out of range");
    }
    return this->_content[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= this->_size) {
        throw std::out_of_range("Given index is out of range");
    }
    return this->_content[index];
}

template<typename T>
unsigned int Array<T>::size(void) const {
    return this->_size;
}
