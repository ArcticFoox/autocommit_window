//2638 bfs
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m, ans;
int arr[101][101];
int visited[101][101];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };


void bfs(int x, int y){
    queue<pair<int, int>> q;
    visited[x][y] = -1;
    q.push({x, y});

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

            if(!arr[nx][ny] && !visited[nx][ny]){
                visited[nx][ny] = -1;
                q.push({nx, ny});
            } 
            if(arr[nx][ny] == 1){
                visited[nx][ny]++;
            }
        }
    }
}

int main(){
    
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    
    while(true){
        bool flag = true;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                visited[i][j] = 0;
            }
        }

        bfs(0, 0);

        for(int i = 1; i < n - 1; i++){
            for(int j = 1; j < m - 1; j++){
                if(arr[i][j] == 1 && visited[i][j] >= 2){
                    arr[i][j] = 0;
                    flag = false;
                }
            }
        }

        if(flag){
            break;
        }

        ans++;
    }

    cout << ans;

    return 0;
}