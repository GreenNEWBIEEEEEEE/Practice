/*
 * BinarySearch.h
 * Copyleft (ɔ) 2021 greennewbie <adsl53102@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

namespace chu
{
    // lower_bound version
    template <class T>
    int BinarySearchRecursive(std::vector<T>& vec, int start, int end, T target);
    
    template <class T>
    int BinarySearchIterative(std::vector<T>& vec, T target);
}

#endif /* !BINARYSEARCH_H */
