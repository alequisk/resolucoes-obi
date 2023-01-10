#include<iostream>
using namespace std;

int N, M, x, y;
char grid[500][500];
bool vis[500][500];

void dfs(int u, int v) { 
    vis[u][v] = true;
    grid[u][v] = 'o';
    if (u + 1 == N) return;

    if (grid[u+1][v] == '.' && !vis[u+1][v]) {
        dfs(u+1, v);
    }
    if (grid[u+1][v] == '#') {
        if (v - 1 >= 0 && grid[u][v-1] == '.' && !vis[u][v-1]) {
            dfs(u, v-1);
        }
        if (v + 1 < M && grid[u][v+1] == '.' && !vis[u][v+1]) {
            dfs(u, v+1);
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'o') {
                x = i;
                y = j;
            }
        }
    }

    dfs(x, y);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << grid[i][j];
        } cout << '\n';
    }

    return 0;
}