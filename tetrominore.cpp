//14500 bfs?
#include<iostream>

using namespace std;

int map[501][501];
bool visited[501][501];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int n, m, ans;

void dfs(int row, int x, int y, int sum){
    sum += map[x][y];
    visited[x][y] = true;
    
    if(row == 4){
        ans = max(ans, sum);
        visited[x][y] = false;
        return;
    }

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        if(!visited[nx][ny]){
            dfs(row+1, nx, ny, sum);
        }
    }
    visited[x][y] = false;
}

void T(int x, int y){
    int sum, dir;

    for(int i = 0; i < 4; i++){
        sum = map[x][y];
        for(dir = 0; dir < 4; dir++){
            if(dir == i) continue;

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            sum += map[nx][ny];
        }

        ans = max(ans, sum);
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> map[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dfs(1, i, j, 0);
            T(i, j);
        }
    }

    cout << ans;
    return 0;
}