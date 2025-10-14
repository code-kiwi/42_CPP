/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 22:50:48 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/14 14:42:23 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <vector>

class Sorter {
public:
    static void MEsortVector(std::vector<int> numbers, int blockSize);
    static void MEsortDeque(std::deque<int> numbers, int blockSize);

private:
    Sorter(void);
    Sorter(const Sorter &);
    ~Sorter(void);
    Sorter &operator=(const Sorter &);
};

#endif
