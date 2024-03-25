from collections import defaultdict


def count_arrangements(relations):
    # Step 1: Create a graph data structure from the given relations
    graph = defaultdict(list)
    for relation in relations:
        print(relation)
        a, b = relation[0], relation[2]
        print(a,b)
        graph[a].append(b)
        # graph[b].append(a)

    # Step 2: Calculate the number of possible incoming edges for each node
    incoming_edges = {node: 0 for node in graph}
    for nodes in graph.values():
        for node in nodes:
            incoming_edges[node] += 1

    # Step 3: Multiply the number of possible incoming edges for this node with the number of possible incoming edges for all its neighbors
    product = 1
    for node in graph:
        neighbors = graph[node]
        for neighbor in neighbors:
            product *= incoming_edges[neighbor]

    # Step 4: Divide the product by the factorial of the number of incoming edges for this node
    for node in graph:
        product //= incoming_edges[node]

    # Step 5: Sum the results for all nodes
    return product

# Test cases
print(count_arrangements(["A>B", "A<C", "C<Z"]))  # Output: 1
print(count_arrangements(["A>B", "B<R", "R<G"]))  # Output: 3
