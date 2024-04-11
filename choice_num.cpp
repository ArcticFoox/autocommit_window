//2668 dfs
#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int n;
int arr[101];
bool visited[101];
vector<int> v;

void dfs(int cur, int st){
    if(visited[cur]){
        if(st == cur) v.push_back(cur);
        return;
    }

    visited[cur] = true;
    dfs(arr[cur], st);
}

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        dfs(i, i);
    }

    cout << v.size() << '\n';
    for(auto i: v) cout << i << '\n';
    return 0;
}