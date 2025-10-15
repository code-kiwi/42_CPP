/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 22:50:48 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/15 23:48:06 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <string>
#include <vector>

class PmergeMe {
public:
    static void sortVector(std::vector<int> &numbers, int blockSize);
    static void sortDeque(std::deque<int> &numbers, int blockSize);

private:
    PmergeMe(void);
    PmergeMe(const PmergeMe &);
    ~PmergeMe(void);
    PmergeMe &operator=(const PmergeMe &);
    typedef typename std::vector<int>::iterator IteratorV;
    typedef typename std::vector<IteratorV>::iterator ItofIteratorV;

    static void sortVectorBlockSwap(IteratorV start, IteratorV end, int blockSize);
    static void sortVectorInsertion(std::vector<IteratorV> &sorted, std::vector<IteratorV> &store);

    static void swapBlocksV(std::vector<int>::iterator it, int blockSize);
    static bool compareItV(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
    static int jacobsthalSequence(int n);
};

#endif
