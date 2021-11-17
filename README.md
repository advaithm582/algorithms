# Algorithms

This repository contains some implementations of algorithms which are in syllabus of the INOI.

## Table of Algorithms

 - The `*` denotes that the file is not available.
 - The `^` denotes that the file is a Unit Test, instead of a demo.

Name of Algorithm | Language | Link to file | Link to demo | Description 
------------------|----------|--------------|--------------|-------------
Binary Search | Python | [File](python/searching/binarysearch.py) | [File](python/searching/binarysearch_demo.py)* | An algorithm to search for an element in a sorted list
Merge Sort | Python | [File](python/sorting/merge_sort.py) | [File](python/sorting/merge_sort_demo.py) | Sorting by recursively splitting the list into two halves and then merging the halves
Merge Sort | C++ | [File](cpp/sorting/mergesort.cpp) | [File](https://github.com/advaithm582/algorithms/releases/tag/2021.11.15) | Sorting by recursively splitting the list into two halves and then merging the halves
Quicksort | Python | [File](python/sorting/quicksort.py) | [File](python/sorting/quicksort_demo.py) | Sorting in-place by recursively splitting the list such that all elements lesser than the pivot are on the left and all elements greater than the pivot are on the right.
Quicksort | C++ | [File](cpp/sorting/quicksort.cpp) | [File](https://github.com/advaithm582/algorithms/releases/tag/2021.11.17) | Sorting in-place by recursively splitting the list such that all elements lesser than the pivot are on the left and all elements greater than the pivot are on the right.
Breadth First Search | Python | [File](python/graph/bfs.py) | [File](python/graph/bfs_demo.py) | Graph traversing algorithm that tells the connectivity between two nodes.
Breadth First Search | Python | [File](python/graph/bfs.py#L30) | [File](python/graph/bfs_unittest.py)^ | Graph traversing algorithm that tells the connectivity between two nodes. This one uses an alternate data structure to represent a graph ( a `dict`.)
Breadth First Search | C++ | [File](cpp/graph/bfs.cpp)* | [File]()* | Graph traversing algorithm that tells the connectivity between two nodes.
Depth First Search | Python | [File](python/graph/dfs.py)* | [File](python/graph/dfs_demo.py)* | Graph traversing algorithm that tells the connectivity 