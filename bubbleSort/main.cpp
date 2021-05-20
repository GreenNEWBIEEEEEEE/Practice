/*
 * main.cpp
 * Copyleft (ɔ) 2021 greennewbie <adsl53102@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "BubbleSort.cpp"
int main(void)
{
    std::vector<int> vec = {9, 0, 1};
    chu::BubbleSort(vec, chu::Ascending);
    chu::printVector(vec);
    return 0;
}
