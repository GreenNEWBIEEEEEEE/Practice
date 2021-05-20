/*
 * BubbleSort.h
 * Copyleft (ɔ) 2021 greennewbie <adsl53102@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H


namespace chu
{
    template <class T>
    void BubbleSort(std::vector<T>& vec, bool (*order)(T, T)); 
    
    template <class T>
    bool Descending(T a, T b);
    
    template <class T>
    bool Ascending(T a, T b);
    
    template <class T>
    void printVector(std::vector<T>& vec);
}


#endif /* !BUBBLESORT_H */
