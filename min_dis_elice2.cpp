//elice5 Bellman-Ford
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

const long long INF = LLONG_MAX;

long long v, e, st, en;
vector<vector<long long>> edges;

int main(){
    cin >> v >> e >> st >> en;

    vector<long long> dis(v + 1, INF);

    for(int i = 0; i < e; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        edges.push_back({a, b, c});
    }

    dis[st] = 0;

    for(int i = 0; i < v; i++){
        for(int j = 0; j < e; j++){
            long long cur_node = edges[j][0];
            long long next_node = edges[j][1];
            long long edge_node = edges[j][2];
            
            if(dis[cur_node] != INF && dis[next_node] > dis[cur_node] + edge_node){
                dis[next_node] = dis[cur_node] + edge_node;

                if(i == v - 1){
                    cout << "-INF";
                    return 0;
                }
            }
        }
    }

    if(dis[en] == INF){
        cout << "NO";
    }
    else{
        cout << dis[en];
    }
    return 0;
}