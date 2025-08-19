/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:43:21 by mhotting          #+#    #+#             */
/*   Updated: 2025/08/19 17:41:29 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span {
    public:
        Span(unsigned int maxSize);
        Span(const Span& otherSpan);
        ~Span(void);

        Span& operator=(const Span& otherSpan);
        const int& operator[](unsigned int i) const;

        long shortestSpan(void) const;
        long longestSpan(void) const;

        unsigned int getMaxSize(void) const;
        unsigned int size(void) const;

        void addNumber(const int nb);

        std::vector<int>::const_iterator begin() const;
        std::vector<int>::const_iterator end() const;

    private:
        unsigned int _maxSize;
        std::vector<int> _content;
        Span(void);
};

std::ostream& operator<<(std::ostream& o, const Span& span);

#endif
