import quicksort

te = int(input())
l = list()

for i in range(te):
    l.append(int(input()))
    
quicksort.quicksort(l)

print(l)