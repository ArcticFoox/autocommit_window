//2252 graph(topological_sort)
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
vector<int> arr[32001];
int indegree[32001];
queue<int> q;
vector<int> ans;

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int st, en;
        cin >> st >> en;
        arr[st].push_back(en);
        indegree[en]++;
    }

    for(int i = 1; i <= n; i++){
        if(!indegree[i]) q.push(i);
    }

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        ans.push_back(cur);
        for(int i = 0; i < arr[cur].size(); i++){
            indegree[arr[cur][i]]--;
            if(!indegree[arr[cur][i]]) q.push(arr[cur][i]);
        }
    }

    for(int i : ans){
        cout << i << ' ';
    }

    return 0;
}