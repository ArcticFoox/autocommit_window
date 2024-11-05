//1389 graph(floyd-warshall)
#include<iostream>
#include<vector>
using namespace std;

const int INF = 987654321;
int dis[101][101];
int n, m;
int Min = INF;
int ans;

int main(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) continue;
            dis[i][j] = INF;
        }
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        dis[a][b] = 1;
        dis[b][a] = 1;
    }

    //경유
    for(int i = 1; i <= n; i++){
        //시작
        for(int j = 1; j <= n; j++){
            //끝
            for(int k = 1; k <= n; k++){
                dis[j][k] = min(dis[j][k], dis[j][i] + dis[i][k]);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = 1; j <= n; j++){
            sum += dis[i][j];
        }

        if(Min > sum){
            Min = sum;
            ans = i;
        }
    }

    cout << ans;
    return 0;
}