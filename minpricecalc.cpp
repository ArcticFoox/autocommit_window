//1916 graph
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<pair<int, int> > arr[1001];
int dis[1001];

void dijkstra(int st_node){
    dis[st_node] = 0;

    priority_queue<pair<int, int> > pq;

    pq.push({0, st_node});

    while(!pq.empty()){
        int cur = pq.top().second;
        int curdis = -pq.top().first;

        pq.pop();

        if(dis[cur] < curdis) continue;

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
    int n, m;
    cin >> n;

    for(int i = 1; i <= n; i++){
        dis[i] = 1000000000; // 이 부분을 질문 게시판에 확인함 
    }                        // 노드 간 범위가 10만일 뿐이지 끝에서 끝까지 거리가 10만 밑이 아님

    cin >> m;

    for(int i = 0; i < m; i++){
        int st, en, d;
        cin >> st >> en >> d;
        arr[st].push_back({d, en}); 
    }

    int sn, en;
    cin >> sn >> en;

    dijkstra(sn);

    cout << dis[en];
    return 0;
}