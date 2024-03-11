//1753 dijkstra
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<pair<int, int> > arr[20001];
int v, e;
int dis[20001];

void dijkstra(int st_node){
    dis[st_node] = 0;

    priority_queue<pair<int, int> > pq;

    pq.push({0, st_node});

    while(!pq.empty()){
        int cur = pq.top().second;
        int curdis = -pq.top().first;

        pq.pop();

        if(dis[cur] < curdis){
            continue;
        }

        for(int i = 0; i < arr[cur].size(); i++){
            int next = arr[cur][i].second;

            int nextdis = curdis + arr[cur][i].first;

            if(dis[next] > nextdis){
                dis[next] = nextdis;

                pq.push({-nextdis, next});
            }
        }
    }
    
}

int main(){
    cin >> v >> e;
    int k;
    cin >> k;

    for(int i = 1; i <= v; i++){
        dis[i] = 1000000;
    }

    for(int i = 0; i < e; i++){
        int sp, ep, d;
        cin >> sp >> ep >> d;
        arr[sp].push_back({d, ep});
    }

    dijkstra(k);

    for(int i = 1; i <= v; i++){
        if(dis[i] == 1000000) cout << "INF\n";
        else cout << dis[i] << '\n';
    }

    return 0;
}