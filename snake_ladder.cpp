//16928 bfs
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int map[102];
bool visited[102];
int n, m;

void bfs(int x, int c){
    queue<pair<int, int>> q;
    q.push({x, c});

    while(!q.empty()){
        int loc = q.front().first;
        int cnt = q.front().second;

        q.pop();
 
        for(int i = 1; i <= 6;i++){
            int nx = loc + i;
            if(nx == 100){
                cout << cnt+1;
                return;
            }
            else if(nx < 100){
                while(map[nx] != 0){ 
                    nx = map[nx];
                }
                if(!visited[nx]){ 
                    q.push({nx, cnt + 1});
                    visited[nx] = true;
                }
                
            }
        }
    }
}

int main(){
    int t1, t2;

    cin >> n >> m;
    for (int i = 0; i < n;i++){
        cin >> t1 >> t2; 
        map[t1] = t2;
    }
    for (int i = 0; i < m;i++){
        cin >> t1 >> t2;
        map[t1] = t2;
    }

    bfs(1, 0);
    return 0;
}