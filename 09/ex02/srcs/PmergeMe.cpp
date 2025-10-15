/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:10:35 by mhotting          #+#    #+#             */
/*   Updated: 2025/10/15 23:48:18 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>

void PmergeMe::swapBlocksV(IteratorV it, int blockSize) {
    IteratorV block1Start = it - blockSize + 1;
    IteratorV block2Start = it + 1;

    for (int i = 0; i < blockSize; i++) {
        int temp = *(block1Start + i);
        *(block1Start + i) = *(block2Start + i);
        *(block2Start + i) = temp;
    }
}

int PmergeMe::jacobsthalSequence(int n) {
    return static_cast<int>(round((pow(2, n + 1) + pow(-1, n)) / 3));
}

bool PmergeMe::compareItV(IteratorV it1, IteratorV it2) {
    return *it1 < *it2;
}

void PmergeMe::sortVectorBlockSwap(IteratorV start, IteratorV end, int blockSize) {
    int increment = 2 * blockSize;
    for (IteratorV it = start; it != end; it += increment) {
        IteratorV thisBlockVal = it + (blockSize - 1);
        IteratorV nextBlockVal = it + (blockSize * 2 - 1);
        if (*nextBlockVal < *thisBlockVal) {
            swapBlocksV(thisBlockVal, blockSize);
        }
    }
}

void PmergeMe::sortVectorInsertion(std::vector<IteratorV> &sorted, std::vector<IteratorV> &store) {
    // Insertion : elements from store are inserted into sorted according to Jacobsthal sequence
    int prevJac = jacobsthalSequence(1);
    int nbInserted = 0;
    int n = 2;
    while (true) {
        int curJac = jacobsthalSequence(n);
        int jacDiff = curJac - prevJac;
        if (jacDiff > static_cast<int>(store.size())) {
            break;
        }
        int toInsert = jacDiff;
        ItofIteratorV storeIt = store.begin() + (jacDiff - 1);
        ItofIteratorV boundIt = sorted.begin() + (curJac + nbInserted);
        while (toInsert > 0) {
            ItofIteratorV idx = std::upper_bound(sorted.begin(), boundIt, *storeIt, compareItV);
            sorted.insert(idx, *storeIt);
            toInsert--;
            storeIt = store.erase(storeIt) - 1;
            boundIt = sorted.begin() + (curJac + nbInserted);
        }
        prevJac = curJac;
        nbInserted += jacDiff;
        n++;
    }

    // Insert the elements remaining from store to sorted
    while (!store.empty()) {
        ItofIteratorV i = std::upper_bound(sorted.begin(), sorted.end(), *(store.begin()), compareItV);
        sorted.insert(i, *(store.begin()));
        store.erase(store.begin());
    }
}

void PmergeMe::sortVector(std::vector<int> &numbers, int blockSize) {
    int nbOfBlocks = numbers.size() / blockSize;
    if (nbOfBlocks < 2) {
        return;
    }
    bool hasOddBlock = (nbOfBlocks % 2 == 1);
    IteratorV start = numbers.begin();
    IteratorV last = start + (blockSize * nbOfBlocks);
    IteratorV end = (hasOddBlock ? last - blockSize : last);

    // Step 1: block swapping
    sortVectorBlockSwap(start, end, blockSize);

    // Recursive call to apply on bigger blocks
    sortVector(numbers, blockSize * 2);

    // Insertion : first two elements into sorted, then one into store, one into sorted, the oddBlock into store
    std::vector<IteratorV> sorted;
    std::vector<IteratorV> store;
    sorted.insert(sorted.end(), numbers.begin() + (blockSize - 1));
    sorted.insert(sorted.end(), numbers.begin() + (blockSize * 2 - 1));
    for (int i = 3; i < nbOfBlocks; i += 2) {
        store.insert(store.end(), numbers.begin() + (blockSize * i - 1));
        sorted.insert(sorted.end(), numbers.begin() + (blockSize * (i + 1) - 1));
    }
    if (hasOddBlock) {
        store.insert(store.end(), end + (blockSize - 1));
    }

    // Insertion : All elements from store sent to sorted
    sortVectorInsertion(sorted, store);

    // Update numbers according to sorted iterator order
    std::vector<int> temp;
    for (ItofIteratorV it = sorted.begin(); it != sorted.end(); it++) {
        for (int i = 0; i < blockSize; i++) {
            IteratorV blockStart = *it;
            blockStart = blockStart + (-blockSize + i + 1);
            temp.push_back(*blockStart);
        }
    }
    for (size_t i = 0; i < temp.size(); i++) {
        numbers[i] = temp[i];
    }
}

void PmergeMe::sortDeque(std::deque<int> &numbers, int blockSize) {
    (void)numbers;
    (void)blockSize;
}
