//1331 implementation
#include<iostream>
#include<string>

using namespace std;

bool flag;
int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };
int visited[6][6];

int main(){
    string str;
    cin >> str;
    int sx = 5 - (str[1] - '1');
    int sy = str[0] - 'A';
    int px = sx;
    int py = sy;
    visited[px][py] = 1;

    for(int i = 0; i < 35; i++){
        cin >> str;
        int row = 5 - (str[1] - '1');
        int col = str[0] - 'A';
        flag = false;

        for(int j = 0; j < 8; j++){
            int nx = px + dx[j];
            int ny = py + dy[j];

            if(nx < 0 || nx >= 6 || ny < 0 || ny >= 6) continue;
            if(nx == row && ny == col && visited[nx][ny] == 0){
                visited[row][col] = 1;
                flag = true;
                break;
            }
        }

        if(flag){
            px = row;
            py = col;
        }

        else{
            cout << "Invalid";
            return 0;
        }
    }

    flag = false;
    for(int i = 0; i < 8; i++){
        if (px + dx[i] == sx && py + dy[i] == sy) {
            flag = true;
            break;
        }
    }

    if(flag) cout << "Valid";
    else cout << "Invalid";

    return 0;
}
