//2644 bfs(graph)
#include<iostream>
#include<queue>

using namespace std;

int graph[101][101];
int visited[101];
int n, st, en, m;

int main(){
    cin >> n;
    cin >> st >> en;
    cin >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    queue<int> q;

    q.push(st);

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int i = 1; i <= n; i++){
            if(graph[cur][i] == 1 && !visited[i]){
                q.push(i);
                visited[i] = visited[cur]+1;
            }
        }
    }

    if(!visited[en]){
        cout << -1;
    }
    else{
        cout << visited[en];
    }
    return 0;
}