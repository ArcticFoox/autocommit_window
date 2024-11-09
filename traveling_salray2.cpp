//10971 backtracking
#include<iostream>

using namespace std;

bool visited[11];
int n;
int ans = 1e9;
int graph[11][11];

void dfs(int row, int idx, int cur, int sum){
    if(row == n){
        if(graph[idx][cur]==0) return;
        ans = min(ans, sum + graph[idx][cur]);
        return;
    }

    for(int i = 0; i < n; i++){
        if(visited[i] || graph[idx][i] == 0) continue;
        visited[i] = true;
        dfs(row+1, i, cur, sum + graph[idx][i]);
        visited[i] = false;
    }
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> graph[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        visited[i] = true;
        dfs(1, i, i, 0);
        visited[i] = false;
    }

    cout << ans;
    return 0;
}