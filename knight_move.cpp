//7562 bfs
#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int board[301][301];
int visited[301][301];
int t, n, sx, sy, tx, ty;

void bfs(int x, int y){
    queue<pair<int, int>> q;
    visited[x][y] = 0;
    q.push({x, y});

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        if(cx == tx && cy == ty){
            cout << visited[cx][cy] << '\n';
            break;
        }

        for(int i = 0; i < 8; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if(!visited[nx][ny]){
                visited[nx][ny] = visited[cx][cy] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main(){
    cin >> t;

    while(t--){
        memset(visited, 0, sizeof(visited));

        cin >> n;
        cin >> sx >> sy;
        cin >> tx >> ty;

        bfs(sx, sy);
    }
    return 0;
}