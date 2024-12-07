> NOTE: This repository was made for practicing algorithms for ZIO (India). At the time, I did not
> have robust resources for studying the content. Some algorithms listed here might be complicated
> (e.g. the way quicksort swapping works), incomplete (quicksort doesn't work with duplicates), or
> inefficient (mergesort doesn't use the existing destination array for the merge, wasting memory.)
> Use this repository at your own risk. Do not use any of the code here in production!
>
> A new repository is being created, which implements the below and more data structures/algorithms
> in the C programming language. The code will also be commented to allow easy understanding, and
> will allow for generics. That repository will replace this one when the code is stable.

# Algorithms

This repository contains some implementations of algorithms which are in syllabus of the INOI.

## Table of Algorithms
> **Note:** Refer to the [Webpage](https://advaithm582.github.io/algorithms/) for a complete index.

 - The `*` denotes that the file is not available.
 - The `^` denotes that the file is a Unit Test, instead of a demo.
 - The `-` denotes that the file is an executable program.

> **Note:** The C++ Solutions are just ports of the Python solutions and thus may not be the most efficient way to implement the algorithm in that programming language.

Name of Algorithm | Language | Link to file | Link to demo
------------------|----------|--------------|--------------
Binary Search | Python | [File](python/searching/binarysearch.py) | [File](python/searching/binarysearch_demo.py)* 
Merge Sort | Python | [File](python/sorting/merge_sort.py) | [File](python/sorting/merge_sort_demo.py) 
Merge Sort | C++ | [File](cpp/sorting/mergesort.cpp) | [File](https://github.com/advaithm582/algorithms/releases/tag/2021.11.15)- |
Quicksort | Python | [File](python/sorting/quicksort.py) | [File](python/sorting/quicksort_demo.py) 
Quicksort | C++ | [File](cpp/sorting/quicksort.cpp) | [File](https://github.com/advaithm582/algorithms/releases/tag/2021.11.17)- 
Breadth First Search | Python | [File](python/graph/bfs.py) | [File](python/graph/bfs_demo.py) 
Breadth First Search | Python | [File](python/graph/bfs.py#L31) | [File](python/graph/bfs_unittest.py)^ 
Breadth First Search | Python | [File](python/graph/bfs.py#L62) | [File](python/graph/bfs_unittest.py#L22)^ 
Breadth First Search | C++ | [File](cpp/graph/bfs.cpp) | [File](https://github.com/advaithm582/algorithms/releases/tag/2021.11.18)- 
Depth First Search | Python | [File](python/graph/dfs.py) | [File](python/graph/bfs_unittest.py#L43)^ [File](python/graph/dfs_demo.py)* 
