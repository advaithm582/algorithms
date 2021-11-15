#include<iostream>
#include<vector>
#include "array_io.hpp"

using namespace std;

int main()
{
    vector<int> vec(2);
    vec.push_back(1);
    vec.push_back(2);
    cout<<array_io::array_output(vec);

    return 0;
}