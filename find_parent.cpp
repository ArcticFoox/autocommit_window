//11725 tree
#include<iostream>
#include<vector>

using namespace std;

vector<int> arr[100001];
int p[100001];

void dfs(int cur){
    for(int nxt : arr[cur]){
        if (p[cur] == nxt) continue;
        p[nxt] = cur;
        dfs(nxt);
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
    dfs(1);
    for(int i = 2; i <= n; i++){
        cout << p[i] << '\n';
    }
    return 0;
}