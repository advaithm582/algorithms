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


def basic_dbfs(graph: dict) -> list[int]:
    """basic_dbfs
    
    A basic breadth first search.

    Args:
        graph (list[tuple[int]]): 
            The graph in below form:
                {1:(2,3,4)}

    Returns:
        list[int]: The visited items
    """
    visited = []
    queue = []
    it1=list(graph)[0]
    visited.append(it1)
    queue.append(it1)
    
    while queue:
        j = queue[0]
        items = graph[j]
        for item in items:
            if item not in visited:
                visited.append(item)
                queue.append(item)
        queue.pop(0)
        
    return visited


def enhanced_dbfs(graph: dict) -> list[int]:
    """enhanced_dbfs
    
    Graph traversing algorithm that tells the connectivity, level and
    shortest path between two nodes. This one uses an alternate data 
    structure to represent a graph ( a dict.)

    Args:
        graph (list[tuple[int]]): 
            The graph in below form:
                {1:(2,3,4)}

    Returns:
        list[int]: The visited items
    """
    level = {}
    parent = {}
    queue = []
    
    for i in range(1, len(graph)+1):
        level[i] = -1 # unexplored
        parent[i] = -1
    
    it1=list(graph)[0]
    queue.append(it1)
    level[it1] = 0
    
    while queue:
        j = queue[0]
        items = graph[j]
        for item in items:
            if level[item] == -1:
                level[item] = 1 + level[j]
                parent[item] = j
                queue.append(item)
        queue.pop(0)
        
    return {"level":level, "parents":parent}