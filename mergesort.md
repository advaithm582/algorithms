---
permalink: /sorting/mergesort/
layout: default
redirect_url: "https://www.iarcs.org.in/inoi/online-study-material/topics/mergesort.php"
description: Merge Sort
---

[ < Go Back](../)

# Description
An algorithm to sort a list.

# Working
 - The idea is that we recursively split a list and then we sort it by merging the two halves.

# Time Complexity
For simplicity let size of list be \\(T=n^2\\)
\\[T_n = 2t(\frac{n}{2}) + n \\]
On recursively solving for n/2:
\\[2^jt(\frac{n}{2^j}) + jn \\]
\\[At \frac{n}{2^j} = 1 hence j = \log_2 n \\]
\\[t(n) = 2^{\log_2 n} + \log_2 n \times n \\]
\\[t(n) = n + n log n \\]
\\[O(n log n) \\]

# Links

## Implementations
 - [Python (Code)](https://github.com/advaithm582/algorithms/blob/main/python/sorting/merge_sort.py)
 - [Python (Demo)](https://github.com/advaithm582/algorithms/blob/main/python/sorting/merge_sort_demo.py)
 - [C++ (Code)](https://github.com/advaithm582/algorithms/blob/main/cpp/sorting/mergesort.cpp)
 - [Windows Executable Demo (Compiled C++)](https://github.com/advaithm582/algorithms/releases/tag/2021.11.15)

## Further Reading
 - [Concept (IARCS Study Material)](https://www.iarcs.org.in/inoi/online-study-material/topics/mergesort.php)
 
 
 
 


<script src="https://polyfill.io/v3/polyfill.min.js?features=es6"></script>


<script id="MathJax-script" async src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js"></script>
