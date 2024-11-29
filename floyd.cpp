//11404 graph(floyd_warshall)
#include<iostream>

using namespace std;

int n;
int map[101][101];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) continue;
            map[i][j] = 10000000;
        }
    }

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        map[a][b] = min(map[a][b], c);
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                map[i][j] = min(map[i][k] + map[k][j], map[i][j]);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(map[i][j] == 10000000){
                cout << 0 << ' ';
                continue;
            }
            cout << map[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}