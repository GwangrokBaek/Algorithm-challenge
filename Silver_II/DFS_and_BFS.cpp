/*
 * Author : Kwangrok Baek (zester926@gmail.com)
 * URL : https://www.acmicpc.net/problem/1260
 * type : dfs, bfs
 */

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;
int n, m, v, x, y, arr[1001][1001];
bool c[1001];

void dfs(int start) {
    printf("%d ", start);
    for (int i = 1; i <= n; i++) {
        if (arr[start][i] && !c[i]) {
            c[i] = true;
            dfs(i); // 2. 재귀 호출
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    c[start] = true;
    while(!q.empty()) {
        int next = q.front();
        q.pop();
        printf("%d ", next);
        for (int i = 1; i <= n; i++) {
            if(arr[next][i] && !c[i]) {
                c[i] = true;
                q.push(i); // 4. 인접 노드 먼저 다 넣어준 다음 출력
            }
        }
    }
}

int main(void) {
    scanf("%d %d %d", &n, &m, &v);
    for (int i = 1; i <= m; i++){
        scanf("%d %d", &x, &y); // 1. 숫자 입력
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    c[v] = true;
    dfs(v);
    printf("\n");
    memset(c, false, sizeof(c)); // 3. 방문 배열 재사용
    bfs(v);
    printf("\n");
    return 0;
}
