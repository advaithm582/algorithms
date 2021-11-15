from time import time, sleep
import random

from merge_sort import merge_sort

lst = list(map(float, input("LIST: ").split()))
# lst = [random.randint(1, 100000000000000) for i in range(1, 10000)]
print("...")
tic = time()
l = merge_sort(lst)
toc = time()
print()
print(toc-tic, "SECONDS")

for i in range(5, 0, -1):
    print("\b"*len(f"Wait for {i+1} seconds!!!"), end="",flush=True)
    print(f"Wait for {i} seconds", end="",flush=True)
    sleep(1)
    
print(l)