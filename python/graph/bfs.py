def basic_bfs(graph: list[tuple[int]]) -> list[int]:
    """basic_bfs
    
    A basic breadth first search.

    Args:
        graph (list[tuple[int]]): 
            The graph in below form:
                [(1,0), (1,1), (2,1)]

    Returns:
        list[int]: The visited items
    """
    visited = []
    queue = []
    visited.append(graph[0][0])
    queue.append(graph[0][0])
    
    while queue:
        j = queue[0]
        items = [i[1] for i in graph if i[0]==j]
        for item in items:
            if item not in visited:
                visited.append(item)
                queue.append(item)
        queue.pop(0)
        
    return visited