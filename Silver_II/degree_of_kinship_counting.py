#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2644
#

def bfs(graph, start_node, end_node):
    visited = []
    need_visit = []
    count = 0
    need_visit.append(start_node)

    while need_visit:
        count += 1

        for _ in range(len(need_visit)):
            temp = need_visit.pop(0)
            if temp == end_node:
                return count - 1
            for node in graph[temp]:
                if node not in visited:
                    visited.append(node)
                    need_visit.append(node)

    return -1

if __name__ == '__main__':
    n = int(input())
    a, b = map(int, input().split())
    m = int(input())
    graph = [[] for _ in range(n + 1)]
    for _ in range(m):
        x, y = map(int, input().split())
        graph[x].append(y)
        graph[y].append(x)

    print(bfs(graph, a, b))
