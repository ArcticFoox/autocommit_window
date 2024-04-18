//11725 tree
#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

vector<int> arr[100001];
int p[100001];

void r_dfs(int cur){
    for(int nxt : arr[cur]){
        if (p[cur] == nxt) continue;
        p[nxt] = cur;
        r_dfs(nxt);
    }
}

void s_dfs(int root){
    stack<int> s;
    s.push(root);
    while(!s.empty()){
        int cur = s.top();
        s.pop();
        for(int nxt : arr[cur]){
            if(p[cur] == nxt) continue;
            p[nxt] = cur;
            s.push(nxt);
        }
    }
}

void bfs(int root){
    queue<int> q;
    q.push(root);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int nxt : arr[cur]){
            if(p[cur] == nxt) continue;
            q.push(nxt);
            p[nxt] = cur;
        }
    }
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n - 1; i++){
        int st, en;
        cin >> st >> en;

        arr[st].push_back(en);
        arr[en].push_back(st);
    }
    // r_dfs(1);

    // s_dfs(1);

    bfs(1);

    for(int i = 2; i <= n; i++){
        cout << p[i] << '\n';
    }
    return 0;
}