/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:43:38 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/11 12:19:45 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int maxSize)
    : _maxSize(maxSize), _content(std::vector<int>()) {}

Span::Span(const Span &otherSpan)
    : _maxSize(otherSpan._maxSize), _content(otherSpan._content) {}

Span::~Span(void) {}

Span &Span::operator=(const Span &otherSpan) {
  if (this != &otherSpan) {
    this->_maxSize = otherSpan._maxSize;
    this->_content = otherSpan._content;
  }
  return *this;
}

const int &Span::operator[](unsigned int i) const {
  return this->_content.at(i);
}

long Span::shortestSpan(void) const {
  long shortest;

  if (this->size() < 2) {
    throw std::range_error("The Span does not contain enough values");
  }
  std::vector<int> tempContent = this->_content;
  std::sort(tempContent.begin(), tempContent.end());
  shortest = static_cast<long>(tempContent.at(1)) -
             static_cast<long>(tempContent.at(0));
  for (std::vector<int>::const_iterator it = tempContent.begin() + 1;
       it + 1 != tempContent.end(); it++) {
    long temp = static_cast<long>(*(it + 1)) - static_cast<long>(*it);
    if (temp < shortest) {
      shortest = temp;
    }
  }
  return shortest;
}

long Span::longestSpan(void) const {
  if (this->size() < 2) {
    throw std::range_error("The Span does not contain enough values");
  }
  return static_cast<long>(
             *std::max_element(this->_content.begin(), this->_content.end())) -
         static_cast<long>(
             *std::min_element(this->_content.begin(), this->_content.end()));
}

unsigned int Span::getMaxSize(void) const { return this->_maxSize; }

unsigned int Span::size(void) const { return this->_content.size(); }

void Span::addNumber(const int nb) {
  if (this->_content.size() == this->_maxSize) {
    throw std::length_error("The span has reached its maximum capacity");
  }
  this->_content.push_back(nb);
}

std::vector<int>::const_iterator Span::begin() const {
  return this->_content.begin();
}

std::vector<int>::const_iterator Span::end() const {
  return this->_content.end();
}

std::ostream &operator<<(std::ostream &o, const Span &span) {
  o << "Content of Span : [ ";
  for (std::vector<int>::const_iterator it = span.begin(); it != span.end();
       it++) {
    o << *it << " ";
  }
  o << "]";
  return o;
}
