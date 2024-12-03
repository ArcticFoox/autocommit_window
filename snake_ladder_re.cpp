//16928 bfs
#include<iostream>
#include<queue>

using namespace std;

bool visited[101];
int n, m, map[101];

void bfs(){
    queue<pair<int, int>> q; 
    q.push({1, 0});
    visited[1] = true;

    while(!q.empty()) {
        int cur = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(cur == 100) {
            cout << cnt << '\n';
            return;
        }

        for(int i = 1; i <= 6; i++) {
            int next = cur + i;
            if(next > 100 || visited[next]) continue;
            if(map[next] > 0) next = map[next];
            q.push({next, cnt+1});
            visited[next] = true;
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n + m; i++){
        int a, b;
        cin >> a >> b;
        map[a] = b;
    }

    bfs();
    return 0;
}