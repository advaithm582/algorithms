import bfs

total_nodes = int(input())

graph = []

for i in range(total_nodes):
    graph.append(tuple(map(int, input().split())))
    
print(bfs.basic_bfs(graph))

# Sample i/o
# 26
# 1 2
# 1 3
# 1 4
# 2 1
# 2 3
# 3 1
# 3 2
# 4 1
# 4 5
# 4 8
# 5 4
# 5 6
# 5 7
# 6 5
# 6 7
# 6 8
# 6 9
# 7 5
# 7 6
# 8 4
# 8 6
# 8 9
# 9 6
# 9 8
# 9 10
# 10 9
# [1, 2, 3, 4, 5, 8, 6, 7, 9, 10]