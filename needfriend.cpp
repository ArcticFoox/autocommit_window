//21736 bfs
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

char arr[600][600];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool visited[600][600];
int ans;
int n, m;

void bfs(int x, int y){
    queue<pair<int, int>> q;
    visited[x][y] = true;
    q.push({x, y});

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;

        if(arr[cx][cy] == 'P'){
                ans++;
        }

        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(arr[nx][ny] != 'X' && !visited[nx][ny]){
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main(){
    cin >> n >> m;
    pair<int, int> st;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'I'){
                st.first = i;
                st.second = j;
            }
        }
    }

    bfs(st.first, st.second);

    if(!ans) cout << "TT";
    else cout << ans;
    return 0;
}