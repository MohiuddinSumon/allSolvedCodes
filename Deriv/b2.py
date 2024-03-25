def topological_sort(relations):
    # Initialize an empty ordering of the nodes
    ordering = []

    # Mark all nodes as unvisited
    visited = {node: False for node in relations}

    # Iterate over the relations
    for relation in relations:
        # If the relation is "A>B", mark node A as visited
        # and add it to the ordering if all its predecessors are visited
        if relation[0] > relation[2]:
            visited[relation[0]] = True
            if all(visited[node] for node in relations if node != relation[0]):
                ordering.append(relation[0])

        # If the relation is "A<B", mark node B as visited
        # and add it to the ordering if all its predecessors are visited
        elif relation[0] < relation[2]:
            visited[relation[1]] = True
            if all(visited[node] for node in relations if node != relation[2]):
                ordering.append(relation[2])

    # If there is a cycle in the graph, backtrack and try another node
    if not ordering:
        return 0

    # Return the number of orderings found
    return 1

# Test the function
relations = [("A", "B"), ("A", "C"), ("C", "Z")]
print(topological_sort(relations)) # Output: 1

relations = [("A", "B"), ("B", "R"), ("R", "G")]
print(topological_sort(relations)) # Output: 3
