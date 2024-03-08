//14940 bfs
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int arr[1001][1001];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int visited[1001][1001];
int tx, ty;

void bfs(int x, int y){
    queue<pair<int, int> >q;
    q.push({x, y});
    visited[x][y] = 1;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;

        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m){
                if (visited[nx][ny] == 0 && arr[nx][ny] != 0){
                    visited[nx][ny] = visited[cx][cy] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int a;
            cin >> a;
            if (a == 2){
                tx = i;
                ty = j;
            }
            arr[i][j] = a;
        }
    }

    bfs(tx, ty);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 0){
                cout << 0 << " ";
            }
            else{
                cout << visited[i][j] - 1 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}