/*
 * BinarySearch.cpp
 * Copyleft (ɔ) 2021 greennewbie <adsl53102@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <vector>
#include "BinarySearch.h"

namespace chu
{
    // lower_bound version
    // search interval [start, end)
    template <class T>
    int BinarySearchRecursive(std::vector<T>& vec, int start, int end, T target)
    {
        if (start == vec.size()) // It may be happen. [length, length)
            return -1;
        else if (start >= end) // end case if search interval == [target, target) == empty interval
            return vec[start] == target ? start : -1; 

        int mid = start + (end - start) / 2;
        if (vec[mid] == target) // it's the same as the following condition
            return BinarySearchRecursive(vec, start, mid, target); // we have to narrow the right interval
        else if (vec[mid] > target)
            return BinarySearchRecursive(vec, start, mid, target);
        else if (vec[mid] < target)
            return BinarySearchRecursive(vec, mid + 1, end, target);
        

    }

    template <class T>
    int BinarySearchIterative(std::vector<T>& vec, T target)
    {
        int start = 0;
        int end = vec.size();
        while (start < end) // end case
        {
            int mid = start + (end - start) / 2;
            if (vec[mid] > target)
                end = mid;
            else if (vec[mid] < target)
                start = mid + 1;
            else if (vec[mid] == target)
                end = mid;
        }
        if (start == vec.size())
            return -1;
        return vec[start] == target ? start : -1;
    }
}
