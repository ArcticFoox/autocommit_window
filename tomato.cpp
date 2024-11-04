//7569 bfs
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int M, N, H, ans;

int box[101][101][101];
int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {1, -1, 0, 0, 0, 0};
int dh[6] = {0, 0, 0, 0, 1, -1};
queue<pair<int, pair<int, int>>> q;

void bfs(){
    while(!q.empty()){
        int ch = q.front().first;
        int cx = q.front().second.first;
        int cy = q.front().second.second;

        q.pop();

        for(int i = 0; i < 6; i++){
            int nh = ch + dh[i];
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nh < 0 || nx < 0 || ny < 0 || nh >= H || nx >= M || ny >= N) continue;
            if(box[nh][nx][ny] == 0){
                box[nh][nx][ny] = box[ch][cx][cy] + 1;
                q.push({nh, {nx, ny}});
            }
        }
    }
}


int main(){
    cin >> N >> M >> H;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < N; k++){
                cin >> box[i][j][k];
                if(box[i][j][k] == 1){
                    q.push({i, {j, k}});
                }
            }
        }
    }    

    bfs();

    for(int i = 0; i < H; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < N; k++){
                cin >> box[i][j][k];
                if(box[i][j][k] == 0){
                    cout << -1;
                    return 0;
                }

                if(box[i][j][k] > ans){
                    ans = box[i][j][k];
                }
            }
        }
    }    
    cout << ans - 1;
    return 0;
}