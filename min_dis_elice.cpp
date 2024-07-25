//elice4 dijkstra
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int v, e;
int s, f;
vector<pair<int, int>> graph[20001];
int dis[20001];

void dj(int st_node){
    priority_queue<pair<int, int>> pq;
    dis[st_node] = 0;
    pq.push({0, st_node});

    while(!pq.empty()){
        int cur_dis = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if(dis[cur] < cur_dis){
            continue;
        }

        for(int i = 0; i < graph[cur].size(); i++){
            int next = graph[cur][i].second;
            int next_dis = cur_dis + graph[cur][i].first;

            if(dis[next] > next_dis){
                dis[next] = next_dis;
                pq.push({-next_dis, next});
            }
        }
    }
}

int main(){
    cin >> v >> e;

    for(int i = 1; i <= v; i++){
        dis[i] = 987654321;
    }

    cin >> s >> f;

    for(int i = 0; i < e; i++){
        int st, en, dis;
        cin >> st >> en >> dis;
        graph[st].push_back({dis, en});
    }

    dj(s);

    if(dis[f] == 987654321){
        cout << -1;
    }
    else{
        cout << dis[f];
    }
    return 0;
}