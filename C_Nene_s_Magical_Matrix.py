import heapq
from typing import List, Tuple

def minimum_time(n: int, edges: List[List[int]], disappear: List[int]) -> List[int]:
    time_taken = [float('inf')] * n
    pq = [(0, 0)]
    time_taken[0] = 0

    while pq:
        total_time, node = heapq.heappop(pq)

        if total_time > time_taken[node]:
            continue

        for neighbor, travel_time in edges[node]:
            if disappear[neighbor] > total_time + travel_time:
                new_time = total_time + travel_time
                if new_time < time_taken[neighbor]:
                    time_taken[neighbor] = new_time
                    heapq.heappush(pq, (new_time, neighbor))

    for i in range(n):
        if time_taken[i] == float('inf'):
            time_taken[i] = -1

    return time_taken

# Input parsing
t = int(input())
for _ in range(t):
    n = int(input())
    edges = [[] for _ in range(n)]
    disappear = list(map(int, input().split()))
    for i in range(n):
        for j in range(n):
            if i != j:
                edges[i].append((j, disappear[j]))
    result = minimum_time(n, edges, disappear)
    print(' '.join(map(str, result)))
