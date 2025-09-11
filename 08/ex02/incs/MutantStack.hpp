/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:57:30 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/11 18:18:43 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T>
{
public:
  MutantStack(void);
  MutantStack(const MutantStack &other);
  ~MutantStack(void);
  MutantStack<T> &operator=(const MutantStack &other);

  typedef typename std::stack<T, Container>::container_type::iterator iterator;
  typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
  typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
  typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

  iterator begin(void);
  iterator end(void);

  const_iterator begin(void) const;
  const_iterator end(void) const;

  reverse_iterator rbegin(void);
  reverse_iterator rend(void);

  const_reverse_iterator rbegin(void) const;
  const_reverse_iterator rend(void) const;
};

#include "MutantStack.tpp"

#endif