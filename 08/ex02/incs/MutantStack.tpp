/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:08:13 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/11 18:19:08 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>() {}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void) {}

template <typename T, typename Container>
MutantStack<T> &MutantStack<T, Container>::operator=(const MutantStack &other)
{
    if (this != &other)
    {
        std::stack<T, Container>::operator=(other);
    }
    return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void) { return this->c.begin(); };

template <typename T, typename Container>
MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void) { return this->c.end(); };

template <typename T, typename Container>
MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin(void) const { return this->c.begin(); };

template <typename T, typename Container>
MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end(void) const { return this->c.end(); };

template <typename T, typename Container>
MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin(void) { return this->c.begin(); };

template <typename T, typename Container>
MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend(void) { return this->c.end(); };

template <typename T, typename Container>
MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rbegin(void) const { return this->c.begin(); };

template <typename T, typename Container>
MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rend(void) const { return this->c.end(); };
