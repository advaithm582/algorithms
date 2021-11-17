#include<iostream>
#include<vector>
#include<string>

// include guard
#ifndef AMSDC_H_ARRAY_IO
#define AMSDC_H_ARRAY_IO

/**
 * @brief This namespace contains array input/output
 * related functions. Useful for demonstration of
 * algorithms and for CP.
 * 
 */
namespace array_io
{
    /**
     * @brief This function is a shortcut to input a 
     * array of variable length. Useful for codechef.
     * 
     * @return std::vector<int> 
     */
    std::vector<int> array_input()
    {
        // doc doxygen
        int len_arr;
        std::cin >> len_arr;
        std::vector<int> list(len_arr);
        for(int ind = 0; ind < len_arr; ind++)
        {
            std::cin >> list[ind];
        }

        return list;
    }

    /**
     * @brief This function outputs the array in Python 
     * format ('[10, 15, 20]').
     * 
     * @param array The array
     * @return std::string The string
     */
    std::string array_output(std::vector<int> array)
    {
        std::string out = "[";
        for (int i = 0; i < array.size(); i++)
        {
            out += std::to_string(array[i]);
            if (i != array.size()-1)
            {
                out += ", ";
            }
        }
        out += "]";
        return out;
    }

    /**
     * @brief Slices an integer array
     * 
     * @param array The `vector<int>` to be sliced
     * @param start Start index (positive)
     * @param end  End index (exclusive, positive)
     * @return std::vector<int> 
     */
    std::vector<int> int_array_slice(std::vector<int> array, int start, int end)
    {
        std::vector<int> final_sliced;
        for (int i = start; i < end; i++)
        {
            final_sliced.push_back(array[i]);
        }
        return final_sliced;
    }
}

#endif