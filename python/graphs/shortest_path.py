"""
Problem: Shortest Path (Dijkstra)
Given a weighted graph (adjacency list) and a source node, compute shortest distances.

Approach:
1. Dijkstra with min-heap O((V+E) log V)
"""
import heapq
from typing import Dict, List, Tuple, Any

Graph = Dict[Any, List[Tuple[Any, int]]]

def dijkstra(graph: Graph, start) -> Dict[Any, int]:
    # TODO: implement
    raise NotImplementedError

if __name__ == "__main__":
    g = {
        'A': [('B', 1), ('C', 4)],
        'B': [('C', 2), ('D', 5)],
        'C': [('D', 1)],
        'D': []
    }
    print(dijkstra(g, 'A'))  # expect {'A':0,'B':1,'C':3,'D':4}
