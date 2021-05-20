/*
 * BubbleSort.cpp
 * Copyleft (ɔ) 2021 greennewbie <adsl53102@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include "BubbleSort.h"
namespace chu
{
    template <class T>
    void BubbleSort(std::vector<T>& vec, bool (*order)(T, T))
    {
        for (int i = 0; i < vec.size() - 1; i++) {
            for (int j = 0; j < vec.size() - 1 - i; j++) {
                if (order(vec[j], vec[j + 1]))
                    std::swap(vec[j], vec[j + 1]);
            }
        }
    }
    
    template <class T>
    bool Ascending(T a, T b)
    {
        return a > b;
    }

    template <class T>
    bool Descending(T a, T b)
    {
        return a < b;
    }

    template <class T>
    void printVector(std::vector<T>& vec)
    {
        for (int i = 0; i < vec.size(); i++) {
            std::cout << "vec[" << i << "] = " << vec[i] << std::endl;
        }
        
    }
}

