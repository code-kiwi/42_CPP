#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <algorithm>
#include <deque>
#include <vector>
#include <iostream>
#include <sstream>

template <typename T>
static std::string vec_to_str2(T &vec)
{
    std::stringstream ss;
    ss << "[" << vec[0];
    for (size_t i = 1; i < vec.size(); i++)
    {
        ss << " " << vec[i];
    }
    ss << "]";
    return ss.str();
}

class PmergeMe
{
  public:
    PmergeMe();
    PmergeMe(const PmergeMe& pm);
    PmergeMe& operator=(const PmergeMe& pm);
    ~PmergeMe();

    void sort_vec(std::vector<int>& vec);
    void sort_deque(std::deque<int>& deque);

	static int nbr_of_comps;

  private:
    template <typename T> void _merge_insertion_sort(T& container, int blockSize);

    template <typename T> void swapBlocks(T it, int blockSize);
};

long _jacobsthal_number(long n);

template <typename T> bool _comp(T lv, T rv) {
	PmergeMe::nbr_of_comps++;
	return *lv < *rv;
}

template <typename T> T next(T it, int steps)
{
    std::advance(it, steps);
    return it;
}

template <typename Iterator>
void PmergeMe::swapBlocks(Iterator it, int blockSize)
{
    Iterator block1Start = it - blockSize + 1;
    Iterator block2Start = it + 1;

    for (int i = 0; i < blockSize; i++) {
        int temp = *(block1Start + i);
        *(block1Start + i) = *(block2Start + i);
        *(block2Start + i) = temp;
    }
}

template <typename T> void PmergeMe::_merge_insertion_sort(T& container, int blockSize)
{
    typedef typename T::iterator Iterator;
    int nbOfBlocks = container.size() / blockSize;
    if (nbOfBlocks < 2) {
        return;
    }
    bool hasOddBlock = nbOfBlocks % 2 == 1;
    Iterator start = container.begin();
    Iterator last = start + (blockSize * nbOfBlocks);
    Iterator end = (hasOddBlock ? last - blockSize : last);

    int increment = 2 * blockSize;
    for (Iterator it = start; it != end; it += increment)
    {
        Iterator thisBlock = it + (blockSize - 1);
        Iterator nextBlock = it + (blockSize * 2 - 1);
        if (*nextBlock < *thisBlock) {
            swapBlocks(thisBlock, blockSize);
        }
    }
    _merge_insertion_sort(container, blockSize * 2);
    
    std::cout << "AFTER STEP 1 : " << vec_to_str2<T>(container) << std::endl;
    std::cout << std::endl;
    /* Main contains an already sorted sequence.
       Pend stores yet to be sorted numbers.
       They contain iterators instead of the numbers themselves because
       iterators + blockSize contain all the information about any stored
       range of numbers. */
    std::vector<Iterator> main;
    std::vector<Iterator> pend;

    /* Initialize the main chain with the {b1, a1}.
	   Remember that we already know that b1 is going to be the smallest element in the main chain. */
    main.insert(main.end(), next(container.begin(), blockSize - 1));
    main.insert(main.end(), next(container.begin(), blockSize * 2 - 1));

    /* Insert the rest of a's into the main chain.
       Insert the rest of b's into the pend. */
    for (int i = 4; i <= nbOfBlocks; i += 2)
    {
        pend.insert(pend.end(), next(container.begin(), blockSize * (i - 1) - 1));
        main.insert(main.end(), next(container.begin(), blockSize * i - 1));
    }

    /* Insert an odd element to the pend, if there are any. */
    if (hasOddBlock)
    {
        pend.insert(pend.end(), next(end, blockSize - 1));
    }

    /* Insert the pend into the main in the order determined by the
       Jacobsthal numbers. For example: 3 2 -> 5 4 -> 11 10 9 8 7 6 -> etc.
       During insertion, elements from the main chain serve as an upper bound for inserting elements,
       in order to save number of comparisons, as we know already that, for example,
       b5 is lesser than a5, we binary search only until a5, not until the end of the container.

	   We can calculate the index of the bound element. With the way I do it,
	   the index of the bound is inserted_numbers + current_jacobsthal_number. */
    int prev_jacobsthal = _jacobsthal_number(1);
    int inserted_numbers = 0;
    for (int k = 2;; k++)
    {
        int curr_jacobsthal = _jacobsthal_number(k);
        int jacobsthal_diff = curr_jacobsthal - prev_jacobsthal;
		int offset = 0;
        if (jacobsthal_diff > static_cast<int>(pend.size()))
            break;
        int nbr_of_times = jacobsthal_diff;
        typename std::vector<Iterator>::iterator pend_it = next(pend.begin(), jacobsthal_diff - 1);
        typename std::vector<Iterator>::iterator bound_it =
            next(main.begin(), curr_jacobsthal + inserted_numbers);
        while (nbr_of_times)
        {
            typename std::vector<Iterator>::iterator idx =
                std::upper_bound(main.begin(), bound_it, *pend_it, _comp<Iterator>);
            typename std::vector<Iterator>::iterator inserted = main.insert(idx, *pend_it);
            nbr_of_times--;
            pend_it = pend.erase(pend_it);
            std::advance(pend_it, -1);
            /* Sometimes the inserted number in inserted at the exact index of where the bound should be.
			   When this happens, it eclipses the bound of the next pend, and it does more comparisons
			   than it should. We need to offset when this happens. */
            offset += (inserted - main.begin()) == curr_jacobsthal + inserted_numbers;
			bound_it = next(main.begin(), curr_jacobsthal + inserted_numbers - offset);
        }
        prev_jacobsthal = curr_jacobsthal;
        inserted_numbers += jacobsthal_diff;
		offset = 0;
    }

    /* Insert the remaining elements in the reversed order. Here we also want to
       perform as less comparisons as possible, so we calculate the starting bound
       to insert pend number to be the pair of the first pend number. If the first
       pend number is b8, the bound is a8, if the pend number is b7, the bound is a7 etc.
       With the way I do it the index of bound is
       size_of_main - size_of_pend + index_of_current_pend. */
    for (ssize_t i = pend.size() - 1; i >= 0; i--)
    {
        typename std::vector<Iterator>::iterator curr_pend = next(pend.begin(), i);
        typename std::vector<Iterator>::iterator curr_bound =
            next(main.begin(), main.size() - pend.size() + i + hasOddBlock);
        typename std::vector<Iterator>::iterator idx =
            std::upper_bound(main.begin(), curr_bound, *curr_pend, _comp<Iterator>);
        main.insert(idx, *curr_pend);
    }

    /* Use copy vector to store all the numbers, in order not to overwrite the
       original iterators. */
    std::vector<int> copy;
    copy.reserve(container.size());
    for (typename std::vector<Iterator>::iterator it = main.begin(); it != main.end(); it++)
    {
        for (int i = 0; i < blockSize; i++)
        {
            Iterator pair_start = *it;
            std::advance(pair_start, -blockSize + i + 1);
            copy.insert(copy.end(), *pair_start);
        }
    }

    /* Replace values in the original container. */
    Iterator container_it = container.begin();
    std::vector<int>::iterator copy_it = copy.begin();
    while (copy_it != copy.end())
    {
        *container_it = *copy_it;
        container_it++;
        copy_it++;
    }
}
#endif
