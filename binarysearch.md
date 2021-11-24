---
permalink: /searching/binarysearch/
layout: default
redirect_url: "https://www.iarcs.org.in/inoi/online-study-material/topics/binarysearch.php"
description: Binary Search
---

# Description
An algorithm to search for an element in a sorted list

# Working
 - The idea is that in a sorted list, we choose a middle element. If the element to be searched for is greater than the middle element, we search that part else we search the lesser than part. This goes on recursively till the element to be found is reached.
 - It works only for sorted arrays.

# Time Complexity
 - \\( \Rightarrow T(n) = 1+T\left(\frac{n}{2}\right) \\)
 - \( \Rightarrow T(n) = 1+1+T\left(\frac{n}{2^2}\right) \\)
 - \( \Rightarrow T(n) = 1+1+T\left(\frac{n}{2^3}\right) \\)
 - Hence, \\( O(\log_2 n) \\)


 - ![\Rightarrow T(n) = 1+T\left(\frac{n}{2}\right)](https://i.upmath.me/png/%5CRightarrow%20T(n)%20%3D%201%2BT%5Cleft(%5Cfrac%7Bn%7D%7B2%7D%5Cright))
 - ![\Rightarrow T(n) = 1+1+T\left(\frac{n}{2^2}\right)](https://i.upmath.me/png/%5CRightarrow%20T(n)%20%3D%201%2B1%2BT%5Cleft(%5Cfrac%7Bn%7D%7B2^2%7D%5Cright))
 - ![\Rightarrow T(n) = 1+1+T\left(\frac{n}{2^3}\right)](https://i.upmath.me/png/%5CRightarrow%20T(n)%20%3D%201%2B1%2B1%2BT%5Cleft(%5Cfrac%7Bn%7D%7B2^3%7D%5Cright))
 - Hence, ![O(\log_2 n)](https://i.upmath.me/png/O(\log_2%20n))

# Links

Language |  Link | Code/Demo 
---------|-------|-----------
Python | [Code](python/searching/binarysearch.py) | C 
C++ | Not Available | C 
Python | [Code](python/searching/binarysearch_demo.py) | D 
C++ | Not Available | D 
 <!--- [Interactive Demo](python/searching/binarysearch_demo.py) --->
 
<script src="https://polyfill.io/v3/polyfill.min.js?features=es6"></script>
<script id="MathJax-script" async src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js"></script>