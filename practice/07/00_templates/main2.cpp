/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:37:53 by mhotting          #+#    #+#             */
/*   Updated: 2025/07/28 19:48:05 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class List {
    public:
        List(const T& content) {
            this->_content = content;
            this->_next = 0;
        }

        List(const List<T>& list) {
            this->_content = list._content;
            this->_next = 0;
        }

        ~List(void) {}
    private:
        T _content;
        List<T>* _next;
};

int main(void) {
    List<int> l1(1);
    List<float> l2(1.3f);
    List<List<int>> l3(l1);
    
    return 0;
}