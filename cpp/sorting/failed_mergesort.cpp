/**
 * @file failed_mergesort.cpp
 * @author Advaith Menon (vae7pkgv@duck.com)
 * @brief A terribly failed implementation of merge sort.
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021 Advaith Menon
 * 
 */

#include<iostream>
#include<vector>
#include<string>

using namespace std;

string print_list(vector<int> list)
{
    string op;
    op+= "[";
    for (int i = 0; i < list.size(); i++)
    {
        op+= to_string(list[i]) + ", ";
    }
    op += "]\n";
    return op;
}

vector<int> merge_sort(vector<int> lst, int m = 0,int n = -1)
{
    cout << "o/p" << endl;
    if (n==-1)
    {
        //cout << "N is -1 det size" << endl;
        n = lst.size() - 1;
    }

    //cout << "Varue of N: " << n << " m: " << m << endl;
    int len_lst = n-m+1;
    //cout << "Varue len_lst: " << len_lst << endl;

    if (len_lst < 2)
    {
        /*
        Step 0: If the list is already having a single element, then we 
        can just return that, as it's already sorted. If it has zero 
        elements just return the empty list
        */
        cout << "List length less than 2" << endl;
        cout << print_list(lst);
        return lst;
    }
    else
    {
        // Step 1: Split the list into two halves.
        // hp is The half point.
        cout << "list len greater than 2" << endl;
        int hp = len_lst/2;
        cout << "hp" << hp << " m "<< m << endl;
        vector<int> sorted_1 = merge_sort(lst,m,m+hp-1);
        vector<int> sorted_2 = merge_sort(lst,m+hp,n);

        cout << print_list(sorted_1) << 'and' << print_list(sorted_2);

        int i = 0, j = 0, k=0;

        int ls1 = hp, ls2 = n-m-hp+1;
        int t = n-m+1;
        
        // The final sorted list
        vector<int> lst_std(t);
        
        while (k < t)
        {
            if (j == ls2)
            {
                // We have reached the end of the second list.
                lst_std[k] = sorted_1[i];
                i++;
            }
            else if (i == ls1)
            {
                // End of first list
                lst_std[k] = sorted_2[j];
                j++;
            }
            else if (sorted_1[i] < sorted_2[j])
            {
                // The first list element is lesser
                lst_std[k] = sorted_1[i];
                i++;
            }
            else {
                lst_std[k] = sorted_2[j];
                j++;
            }
            k++;
        }
        print_list(lst);
        return lst_std;
    }
}

int main()
{
    int len_arr;
    cin >> len_arr;
    vector<int> list(len_arr);
    int len_arr_tmp = len_arr;
    for(int ind = 0; ind < len_arr; ind++)
    {
        cin >> list[ind];
    }

    cout << "o/p" << endl;

    vector<int> sorted_arr = merge_sort(list);
    cout << "o/p" << endl;
    for (int i = 0; i < len_arr; i++)
    {
        cout << "item ";
        cout << sorted_arr[i] << endl;
    }
    
    return 0;
}