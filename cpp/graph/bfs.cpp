/**
 * @file bfs.cpp
 * @author Advaith Menon (vae7pkgv@duck.com)
 * @brief Breadth First Search in C++
 * @version 0.1
 * @date 2021-11-17
 * 
 * @copyright Copyright (c) 2021 Advaith Menon
 * 
 */
#include<iostream>
#include<vector>
#include <conio.h>
#include "../sorting/array_io.hpp"

using namespace std;

/**
 * @brief Graph traversing algorithm that tells the connectivity, level and
 * shortest path between two nodes. 
 * 
 * @param graph The graph in below form:
 * {{1,0},{1,1}}
 * @return std::vector<int> visited
 */
vector<int> basic_bfs(vector<vector<int>> graph)
{
    vector<int> visited;
    vector<int> queue;
    visited.push_back(graph[0][0]);
    queue.push_back(graph[0][0]);

    while (queue.size() > 0)
    {
        int j = queue[0]; // queue head
        vector<int> items;
        for (int i = 0; i < graph.size(); i++)
        {
            if (graph[i][0] == j)
            {
                items.push_back(graph[i][1]);
            }
        }
        for (int i = 0; i < items.size(); i++)
        {
            if (find(visited.begin(), visited.end(), items[i]) == visited.end())
            {
                visited.push_back(items[i]);
                queue.push_back(items[i]);
            }
        }
        queue.erase(queue.begin()); // pop first element
    }
    return visited;
}

int main()
{
    vector<vector<int>> gr = {
        {1, 2},
        {1, 3},
        {1, 4},
        {2, 1},
        {2, 3},
        {3, 1},
        {3, 2},
        {4, 1},
        {4, 5},
        {4, 8},
        {5, 4},
        {5, 6},
        {5, 7},
        {6, 5},
        {6, 7},
        {6, 8},
        {6, 9},
        {7, 5},
        {7, 6},
        {8, 4},
        {8, 6},
        {8, 9},
        {9, 6},
        {9, 8},
        {9, 10},
        {10, 9},
    };
    cout << array_io::array_output(basic_bfs(gr)) << endl;
    getch();
    return 0;
}