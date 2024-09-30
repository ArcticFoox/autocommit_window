//14500 dfs
#include<iostream>

using namespace std;

int n, m;
int arr[500][500];
bool visit[500][500];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int ans;

void dfs(int x, int y, int cnt, int sum){
    if(cnt == 4){
        ans = max(ans, sum);
        return;
    }

    if(!visit[x][y]){
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            visit[x][y] = true;
            dfs(nx, ny, cnt + 1, sum + arr[x][y]);
            visit[x][y] = false;
        }

    }

    // ㅓ
    if(y - 1 >= 0 && x - 1 >= 0 && x + 1 < n)
        ans = max(ans, arr[x][y-1] + arr[x-1][y] + arr[x][y] + arr[x+1][y]);
    // ㅏ
    if(y + 1 < m && x - 1 >= 0 && x + 1 < n)
        ans = max(ans, arr[x][y+1] + arr[x-1][y] + arr[x][y] + arr[x+1][y]);
    // ㅗ
    if(y - 1 >= 0 && x - 1 >= 0 && y + 1 < m)
        ans = max(ans, arr[x][y-1] + arr[x-1][y] + arr[x][y] + arr[x][y+1]);
    // ㅜ
    if(y - 1 >= 0 && x + 1 < n && y + 1 < m)
        ans = max(ans, arr[x][y-1] + arr[x+1][y] + arr[x][y] + arr[x][y+1]);
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            dfs(i, j, 0, 0);
    }

    cout << ans;
    return 0;
}