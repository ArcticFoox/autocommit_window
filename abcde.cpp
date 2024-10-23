//13023 backtracking
#include<iostream>
#include<vector>

using namespace std;

bool visited[2001];
vector<int> arr[2001];
int n, m, ans;

void back(int row, int idx){
    if(row == 5){
        ans = 1;
        return;
    }

    visited[idx] = true;

    for(int i : arr[idx]){
        if(visited[i]) continue;
        back(row+1, i);
    }

    visited[idx] = false;
    
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        back(1, i);
        if(ans) break;
    }

    cout << ans;
    return 0;
}