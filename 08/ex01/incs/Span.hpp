/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:43:21 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/11 12:33:36 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

class Span {
public:
  Span(unsigned int maxSize);
  Span(const Span &otherSpan);
  ~Span(void);

  Span &operator=(const Span &otherSpan);
  const int &operator[](unsigned int i) const;

  long shortestSpan(void) const;
  long longestSpan(void) const;

  unsigned int getMaxSize(void) const;
  unsigned int size(void) const;

  void addNumber(const int nb);

  template <typename InputIterator>
  void addNumbers(InputIterator first, InputIterator last) {
    if (this->size() + std::distance(first, last) > this->_maxSize) {
      throw std::length_error("The span is not large enough to store all the given numbers");
    }
    this->_content.insert(this->_content.end(), first, last);
  }

  std::vector<int>::const_iterator begin() const;
  std::vector<int>::const_iterator end() const;

private:
  unsigned int _maxSize;
  std::vector<int> _content;
  Span(void);
};

std::ostream &operator<<(std::ostream &o, const Span &span);

#endif
