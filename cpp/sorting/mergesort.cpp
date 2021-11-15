/**
 * @file mergesort.cpp
 * @author Advaith Menon (vae7pkgv@duck.com)
 * @brief Merge Sort
 * https://www.iarcs.org.in/inoi/online-study-material/topics/mergesort.php
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
 * @brief An implementation of MERGE SORT.
 * 
 * @param array The C++ vector to sort
 * @param from_index The from index. Interpreted as
 * in a positive Python slice
 * @param to_index The to index. Interpreted as
 * in a positive Python slice
 * @return vector<int> The sorted array
 */
vector<int> merge_sort(vector<int> array, int from_index = 0, int to_index = -1)
{
    // Step 0: If `to_index` is not defined, let's find it out
    if (to_index == -1)
    {
        to_index = array.size();
    }
    
    // Step 1: Get Length of Slice.
    int slice_len = to_index-from_index;

    // Step 2: Check length of the slice
    if (slice_len < 2)
    {
        // The list has 1 or 0 elements
        return array_io::int_array_slice(array, from_index, to_index);
    }
    else
    {
        // Okay, we have to sort!
        int half_point = (from_index+to_index)/2;

        vector<int> sorted_half_1 = merge_sort(array, from_index, half_point);
        vector<int> sorted_half_2 = merge_sort(array, half_point, to_index);

        int counter_1 = 0;
        int counter_2 = 0;
        int overall_counter = 0;
        //vector<int> final_sorted(slice_len);
        vector<int> final_sorted;

        while (overall_counter<slice_len)
        {
            if (counter_1 == sorted_half_1.size())
            {
                // We have reached the end of the first list, so
                // we just place the elements of the second list,
                // which itself is already sorted.
                final_sorted.push_back(sorted_half_2[counter_2]);
                counter_2++;
            }
            else if (counter_2 == sorted_half_2.size())
            {
                // We have reached the end of the second list, so
                // we just place the elements of the first list,
                // which itself is already sorted.
                final_sorted.push_back(sorted_half_1[counter_1]);
                counter_1++;
            }
            else if (sorted_half_1[counter_1] < sorted_half_2[counter_2])
            {
                // The element in the first list is lesser, so we add
                // that.
                final_sorted.push_back(sorted_half_1[counter_1]);
                counter_1++;
            }
            else
            {
                // The element in the second list is lesser or equal,
                // so we add that.
                final_sorted.push_back(sorted_half_2[counter_2]);
                counter_2++;
            }
            overall_counter++;
        }
        return final_sorted;
    }
}

int main()
{
    vector<int> arr = array_io::array_input();
    vector<int> sarr = merge_sort(arr);
    cout << array_io::array_output(sarr);
    return 0;
}