def enhanced_dfs(graph: dict) -> dict:
    visited = {}
    parent = {}
    for i in range(1, len(graph)+1):
        visited[i] = 0
        parent[i] = -1
    
    def __enhanced_dfs(vertex: int) -> None:
        visited[vertex] = 1
        
        for child in graph[vertex]:
            if visited[child] == 0:
                parent[child] = vertex
                __enhanced_dfs(child)

    
    __enhanced_dfs(list(graph)[0])
    
    return parent