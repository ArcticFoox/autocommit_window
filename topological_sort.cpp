//topological_sort practice
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> arr[1000];
int indegree[1000];
int n, m;
void topo(){
    queue<int> q;
    for(int i = 0; i < m; i++){
        if(!indegree[i]) q.push(i);
    }

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << '\n';
        for(int i = 0; i < arr[cur].size(); i++){
            indegree[arr[cur][i]]--;
            if(!indegree[arr[cur][i]]) q.push(arr[cur][i]);
        }
    }
}

int main(){
    //들어오는 간선이 없는 것 우선으로 큐 적재
    //vis 두고 큐에 들어갔다면 true로 표시
    //들어오는 간선이 모두 true이면 다음 것 큐 적재
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int st, en;
        cin >> st >> en;
        arr[st].push_back(en);
        indegree[en]++;
    }

    return 0;
}