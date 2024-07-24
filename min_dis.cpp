//1753 dijkstra
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int v, e, k;
vector<pair<int, int>> graph[20001];
int dis[20001];

void dj(int st){
    dis[st] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, st});

    while(!pq.empty()){
        int cur_dis = -pq.top().first;
        int cur = pq.top().second;

        for(int i = 0;i < graph[cur].size(); i++){
            int next = graph[cur][i].second;
            int nextdis = graph[cur][i].first + cur_dis;

            if(dis[next] > nextdis){
                dis[next] = nextdis;
                pq.push({-nextdis, next});
            }
        }
    }
}

int main(){

    cin >> v >> e >> k;

    for(int i = 0; i < v; i++){
        dis[i] = 987654321;
    }

    for(int i = 0; i < e; i++){
        int st, en, dis;
        cin >> st >> en >> dis;
        graph[st].push_back({dis, en});
    }

    dj(k);

    for(int i = 1; i <= v; i++){
        if(dis[i] == 987654321) cout << "INF\n";
        else cout << dis[i] << '\n';
    }

    return 0;
}