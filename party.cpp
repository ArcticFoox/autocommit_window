//1238 dijkstra
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define INTMAX 2147483647
#define MAX 1001

using namespace std;

vector<pair<int, int>> arr[MAX];
int dis[MAX];
int costs[MAX];
int n, m, x, ans;

int dijkstra(int st_node, int x){
    fill(dis, dis+MAX, INTMAX);

    dis[st_node] = 0;

    priority_queue<pair<int, int>> pq;
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

    return dis[x];
}

int main(){
    cin >> n >> m >> x;

    for(int i = 0; i < m; i++){
        int st, en, d;
        cin >> st >> en >> d;
        arr[st].push_back({d, en});
    }

    for(int i = 1; i <= n; i++){
        costs[i] = dijkstra(i, x);
    }

    dijkstra(x, x);

    for(int i = 1; i <= n; i++){
        costs[i] += dis[i];
        ans = max(ans, costs[i]);
    }

    cout << ans;
    return 0;
}