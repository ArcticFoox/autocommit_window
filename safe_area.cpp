//2468 bfs
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int arr[101][101];
bool visited[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, wave;
int Max = 1;

void bfs(int x, int y){
    queue<pair<int, int> > q;

    q.push({x, y});
    visited[x][y] = true;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;

        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if(!visited[nx][ny] && arr[nx][ny] > wave){
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(wave = 1; wave < 101; wave++){
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = false;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j] && arr[i][j] > wave){
                    bfs(i, j);
                    cnt++;
                }
            }
        }
        Max = max(Max, cnt);
    }
    cout << Max;
    return 0;
}