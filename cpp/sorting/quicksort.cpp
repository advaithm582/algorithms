/**
 * @file quicksort.cpp
 * @author Advaith Menon (vae7pkgv@duck.com)
 * @brief Quick Sort
 * https://www.iarcs.org.in/inoi/online-study-material/topics/quicksort.php
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021 Advaith Menon
 * 
 */

#include<iostream>
#include<vector>
#include "array_io.hpp"

using namespace std;

/**
 * @brief Sort a given `list` using the Quicksort Algorithm.
 * The sorting is in place.
 * 
 * For more information, refer to 
 * [IARCS Study Material](https://bit.ly/3qZphib)
 * 
 * @param array The list to be sorted
 * @param l The leftmost value from where sorting has to start.
 * Defaults to 0.
 * @param r The rightmost value from where sorting has to start.
 * This value is an exclusive value, as in the rest of Python.
 * If the value given is -1, the length of the list is taken 
 *  to be the end of the list, inclusive. Note that this is not
 *  the same as -1 Python Indexing.
 *  Defaults to -1.
 */
void quicksort(int *array, int l = 0, int r = -1)
{
    // Step -1: Check if r is -1, if so, change it's value
    if (r==-1)
    {
        // Can't do anything due to C++ limitation
        //r = len(array);
    }

    // Step 0: Check if the list is already sorted
    if (r-l<=1)
    {
        // In this case, the element has 1 or less elements (exclusive),
        // so it is obvious that that portion is already sorted.
        return;
    }

    // Step 1: Keep track of the pointers
    // The pointers here take the first value as a pivot.
    // Example:
    // In the below example, 1 points to pivot element, 2 to the end of
    // the part lesser than the pivot element (that part starts from 1)
    // and 3 points to the end of the part greater than the pivot 
    // element (that portions starts from pointer 2).
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 75 | 64 | 29 |
    // +----+----+----+----+----+----+
    //  1^ 2^^3
    // while (_3:=_3+1 and _3<len(array)):
    // if array[_3] < array[_1]: // yes.
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 75 | 64 | 29 |
    // +----+----+----+----+----+----+
    //  1^     2^^3
    // _3+=1
    // if array[_3] < array[_1]: // yes.
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 75 | 64 | 29 |
    // +----+----+----+----+----+----+
    //  1^          2^^3
    // _3+=1
    // if array[_3] < array[_1]: // no.
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 75 | 64 | 29 |
    // +----+----+----+----+----+----+
    //  1^           2^   3^
    // _3+=1
    // if array[_3] < array[_1]: // no.
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 75 | 64 | 29 |
    // +----+----+----+----+----+----+
    //  1^           2^        3^
    // _3+=1
    // if array[_3] < array[_1]: // yes.
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 75 | 64 | 29 |
    // +----+----+----+----+----+----+
    //                ^           |
    //                |___________|
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 29 | 64 | 75 |
    // +----+----+----+----+----+----+
    //  1^                2^        3^
    // Now we put the pivot element after 2
    // +----+----+----+----+----+----+
    // | 43 | 32 | 22 | 29 | 64 | 75 |
    // +----+----+----+----+----+----+
    //   |                 ^
    //   |_________________|
    // +----+----+----+----+----+----+
    // | 32 | 22 | 29 | 43 | 64 | 75 |
    // +----+----+----+----+----+----+
    // |--------------|    |---------|
    //   First half         2nd half
    // Now we recursively sort these havles.
    
    int p2 = l+1;
    int p3 = l+1;
    
    while (p3<r)
    {
        if (array[p3] <= array[l])
        {
            //array[p2], array[p3] = array[p3], array[p2];
            int temp = array[p3];
            array[p3] = array[p2];
            array[p2] = temp;
            p2 += 1;
        }
        p3 += 1;
    }
        
        
    // Moving the Pivot Element
    // We do p2-1 since p2 points to the end of the elements lesser than
    // the pivot element i.e. the first element greater than the pivot 
    // element.
    // array[l], array[p2-1] = array[p2-1], array[l];
    int temp = array[p2-1];
    array[p2-1] = array[l];
    array[l] = temp;

    quicksort(array, l, p2-1); // everything lesser than the pivot
    quicksort(array, p2, r); // including the pivot everything greater
}

int main()
{
    vector<int> arr = array_io::array_input();
    int* array = &arr[0];
    quicksort(array,0,arr.size());
    cout << array_io::array_output(array, arr.size());
    delete array;
    return 0;
}