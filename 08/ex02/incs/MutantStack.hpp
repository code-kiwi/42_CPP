/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:57:30 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/11 13:32:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
  MutantStack(void);
  MutantStack(const MutantStack &other);
  ~MutantStack(void);
  MutantStack<T> &operator=(const MutantStack &other);
};

#endif