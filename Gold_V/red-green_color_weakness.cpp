/*
* Author : Kwangrok Baek (zester926@gmail.com)
* memory, time : 2148 KB, 0ms
* URL : https://www.acmicpc.net/problem/10026
* type : dfs
*/

#include <iostream>
#include <cstring>

using namespace std;

int n, i, j, block_count;
char arr[101][101];
bool check[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

bool dfs(int y, int x, bool color_blind) {
    if (check[y][x]) return false;
    check[y][x] = true;
    
    for (int k = 0; k < 4; k++) {
        int next_x = x + dx[k]; // 3. 동, 서, 남, 북으로 1칸씩 이동 
        int next_y = y + dy[k];

        if (next_x < 0 || next_y < 0 || next_x >= n || next_y >= n || check[next_y][next_x]) continue; // 4. 범위 벗어날 시, 패스

        if (color_blind) { // 5. 적록 색약일 경우
            if ((arr[y][x] == 'B' && arr[next_y][next_x] == arr[y][x]) || \
                ((arr[y][x] == 'R' || arr[y][x] == 'G') && (arr[next_y][next_x] == 'R' || arr[next_y][next_x] == 'G'))) { // 6. 파란색일 경우와 적색, 초록색일 경우를 나눠 dfs 다르게 수행
                 dfs(next_y, next_x, true);
            }
        }
        else {
            if (arr[next_y][next_x] == arr[y][x]) { // 7. 적록 색약이 아닐 경우, 본인의 색에 대해서만 dfs 수행
                dfs(next_y, next_x, false);
            }
        }

    }
    return true;
}

int main(void) {
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", arr[i]); // 1. 문자열 입력
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (!check[i][j] && dfs(i, j, false)) block_count++; // 2. 탐색 안한 구역일 경우, dfs 수행 & count 추가
        }
    }
    printf("%d ", block_count);

    memset(check, 0, sizeof(check));
    block_count = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (!check[i][j] && dfs(i, j, true)) block_count++;
        }
    }
    printf("%d", block_count);
}
