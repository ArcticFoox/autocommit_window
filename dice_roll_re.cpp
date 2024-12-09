//14499 implementation
#include<iostream>
#include<vector>

using namespace std;

// 1-6으로 나타내기 위해 7 선언
vector<int> dice(7);
int n, m, y, x, k;
int map[21][21];

int dy[5] = {0, 0, 0, -1, 1};
int dx[5] = {0, 1, -1, 0, 0};

void roll(int dir){
    if(dir == 1){
        dice = {0, dice[4], dice[2], dice[1], dice[6], dice[5], dice[3]};
    } else if(dir == 2){
        dice = {0, dice[3], dice[2], dice[6], dice[1], dice[5], dice[4]};
    } else if(dir == 3){
        dice = {0, dice[5], dice[1], dice[3], dice[4], dice[6], dice[2]};
    } else if(dir == 4){
        dice = {0, dice[2], dice[6], dice[3], dice[4], dice[1], dice[5]};
    }
}

int main(){
    
    cin >> n >> m >> y >> x >> k;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> map[i][j];

    for(int i = 0; i < k; i++){
        int dir;
        cin >> dir;

        int ny = y + dy[dir];
        int nx = x + dx[dir];
        
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;

        y = ny;
        x = nx;

        roll(dir);

        cout << dice[1] << '\n';

        if(map[y][x] == 0) map[y][x] = dice[6];
        else{
            dice[6] = map[y][x];
            map[y][x] = 0;
        }
    }
    return 0;
}