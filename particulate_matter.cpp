//17144 implementation
#include<iostream>

using namespace std;

int room[51][51];
int expansion[51][51];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int up, down;
int n, m, t;
int dust;

void spread(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int cnt = 0;
            int val = room[i][j] / 5;
            
            if(room[i][j] == 0 || room[i][j] == -1) continue;

            for(int k = 0; k < 4; k++){
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                if(room[nx][ny] == -1) continue;
                
                expansion[nx][ny] += val;
                cnt++;
            }

            expansion[i][j] -= (cnt * val);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            room[i][j] += expansion[i][j];
            expansion[i][j] = 0;
        }
    }
}

void airClean(){
    dust -= room[up - 1][0];
    dust -= room[down + 1][0];

    // 위의 공기 순환 (반시계)
    // 1. 왼쪽줄
    for(int i = up - 1; i > 0; i--)
        room[i][0] = room[i - 1][0];
    // 2. 윗줄
    for(int i = 0; i < m - 1; i++)
        room[0][i] = room[0][i + 1];
    // 3. 오른쪽줄
    for(int i = 1; i <= up; i++)
        room[i - 1][m - 1] = room[i][m - 1];
    // 4. 아랫줄
    for(int i = m - 1; i > 1; i--)
        room[up][i] = room[up][i - 1];
    room[up][1] = 0;

    // 아래공기 순환 (시계)
    // 1. 왼쪽줄
    for(int i = down + 1; i < n - 1; i++)
        room[i][0] = room[i + 1][0];
    // 2. 아랫줄
    for(int i = 0; i < m - 1; i++)
        room[n - 1][i] = room[n - 1][i + 1];
    // 3. 오른쪽줄
    for(int i = n - 1; i >= down; i--)
        room[i][m - 1] = room[i - 1][m - 1];
    // 4. 윗줄
    for(int i = m - 1; i > 1; i--)
        room[down][i] = room[down][i - 1];
    room[down][1] = 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> t;

    bool flag = false;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> room[i][j];
            if(room[i][j] == -1){
                if(!flag){
                    up = i;
                    flag = true;
                }
                else
                    down = i;
            }
            else
                dust += room[i][j];
        }
    }

    for(int i = 0; i < t; i++){
        spread();
        airClean();
    }

    cout << dust;
    return 0;
}