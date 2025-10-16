/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 22:50:48 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/16 10:49:06 by mhotting         ###   ########.fr       */
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

    typedef std::vector<int>::iterator IteratorV;
    typedef std::vector<IteratorV>::iterator ItofIteratorV;
    typedef std::deque<int>::iterator IteratorD;
    typedef std::deque<IteratorD>::iterator ItofIteratorD;

    static void sortVectorBlockSwap(IteratorV start, IteratorV end, int blockSize);
    static void sortDequeBlockSwap(IteratorD start, IteratorD end, int blockSize);
    static void sortVectorInsertion(std::vector<IteratorV> &sorted, std::vector<IteratorV> &store);
    static void sortDequeInsertion(std::deque<IteratorD> &sorted, std::deque<IteratorD> &store);

    static void swapBlocksV(IteratorV it, int blockSize);
    static void swapBlocksD(IteratorD it, int blockSize);
    static bool compareItV(IteratorV it1, IteratorV it2);
    static bool compareItD(IteratorD it1, IteratorD it2);
    static int jacobsthalSequence(int n);
};

#endif
