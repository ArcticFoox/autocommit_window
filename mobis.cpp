//31924 brute-force
#include<iostream>

using namespace std;

char arr[101][101];
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
char obis[4] = {'O', 'B', 'I', 'S'};
int cnt;

void direction(int x, int y){
    for(int i = 0; i < 8; i++){
        int nx = x, ny = y;
        bool flag = false;
        for(int j = 0; j < 4; j++){
            nx += dx[i];
            ny += dy[i];
            if(arr[nx][ny] != obis[j]){
                flag = true;
                break;
            }
        }
        if(!flag)cnt++;
    }
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'M'){
                direction(i, j);
            }
        }
    }

    cout << cnt;
    return 0;
}