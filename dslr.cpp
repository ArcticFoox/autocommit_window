//9019 bfs
#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

bool visited[100001];
int st, en;

string bfs(int num){
    queue<pair<int, string>> q;
    q.push({num, ""});
    visited[num] = true;

    while (!q.empty()){
        int x = q.front().first;
        string s = q.front().second;
        q.pop();

        if(x == en) return s;

        int nx = x * 2;
        if(nx > 9999) nx %= 10000;
        if(!visited[nx]){
            visited[nx] = true;
            q.push({nx, s + "D"});
        }

        nx = x - 1;
        if(nx < 0) nx = 9999;
        if(!visited[nx]){
            visited[nx] = true;
            q.push({nx, s + "S"});
        }

        nx = (x % 1000) * 10 + (x / 1000);
        if(!visited[nx]){
            visited[nx] = true;
            q.push({nx, s + "L"});
        }

        nx = (x % 10) * 1000 + (x / 10);
        if(!visited[nx]){
            visited[nx] = true;
            q.push({nx, s + "R"});
        }
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        memset(visited, false, sizeof(visited));
        cin >> st >> en;
        cout << bfs(st) << '\n';        
    }
    return 0;
}