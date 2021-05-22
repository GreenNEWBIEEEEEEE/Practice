/*
 * main.cpp
 * Copyleft (ɔ) 2021 greennewbie <adsl53102@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include "BinarySearch.h"
#include "BinarySearch.cpp"

int main(void)
{
    std::vector<std::vector<int> > vec = {
        {0, 1},
        {0, 1, 2},
        {0, 0, 1, 1, 2},
        {0, 0, 1, 1, 1, 2},
        {0, 0, 2, 4, 6},
        {0, 2, 4, 5, 6}
    };

    for (int i = 0; i < vec.size(); i++) {
        std::cout << chu::BinarySearchRecursive(vec[i], 0, vec[i].size(), 1) << std::endl;
        std::cout << chu::BinarySearchIterative(vec[i], 1) << std::endl;
        std::cout << std::endl;
    }
    return 0;
}



