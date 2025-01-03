//1967 bfs
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector<pair<int,int>> arr[10001];
bool visited[10001];
int n, result, end_point;

void dfs(int cur, int dis){
    if(visited[cur]) return;

    visited[cur] = true;

    if(dis > result){
        result = dis;
        end_point = cur;
    }

    for(int i = 0; i < arr[cur].size(); i++){
        dfs(arr[cur][i].second, dis + arr[cur][i].first);
    }
}

int main(){
    cin >> n;

    for(int i = 0; i < n - 1; i++){
        int st, en, dis;
        cin >> st >> en >> dis;

        arr[st].push_back({dis, en});
        arr[en].push_back({dis, st});
    }

    dfs(1, 0);

    result = 0;
    memset(visited, false, sizeof(visited));

    dfs(end_point, 0);

    cout << result;
    return 0;
}