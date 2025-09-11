/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:42 by mhotting          #+#    #+#             */
/*   Updated: 2025/09/11 12:58:55 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>

int main(void) {
  // Custom tests
  {
    std::cout << "TEST1 :" << std::endl;
    MutantStack<int> m1;
    m1.push(0);
    m1.push(1);
    m1.push(2);
    m1.push(3);
    std::cout << "m1 size : " << m1.size() << std::endl;
    for (size_t i = 0; m1.size() > 0; i++) {
      std::cout << "m1 " << i << " = " << m1.top() << std::endl;
      m1.pop();
    }
    MutantStack<int> m2(m1);
  }

  std::cout << std::endl << "********************" << std::endl;

  // Provided tests
  {
    std::cout << "TEST2 :" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    //   MutantStack<int>::iterator it = mstack.begin();
    //   MutantStack<int>::iterator ite = mstack.end();
    //   ++it;
    //   --it;
    //   while (it != ite) {
    //     std::cout << *it << std::endl;
    //     ++it;
    //   }
    //   std::stack<int> s(mstack);
  }
  return 0;
}
