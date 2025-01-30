//1331 implementation
#include<iostream>

using namespace std;

int arr[6][6];
bool visited[6][6];
int x, y, sx, sy;
bool flag = true;

int main(){
    string str;
    cin >> str;

    sx = str[1] - '1';
    sy = str[0] - 'A';

    x = str[1] - '1';
    y = str[0] - 'A';

    visited[x][y] = true;

    for(int i = 0; i < 35; i++){
        cin >> str;

        if(!flag) continue;

        int nx = str[1] - '1';
        int ny = str[0] - 'A';

        if(nx < 0 || ny < 0 || nx >= 6 || ny >= 6){
            flag = false;
            continue;
        }

        if((abs(x - nx) == 1 && abs(y - ny) == 2) || 
            (abs(x - nx) == 2 && abs(y - ny) == 1)){
                if(!visited[nx][ny]){
                    x = nx;
                    y = ny;
                    visited[x][y] = true;
                }
                else{
                    flag = false;
                }
        }
        else{
            flag = false;
        }
    }

    if((abs(x - sx) == 1 && abs(y - sy) == 2) || 
        (abs(x - sx) == 2 && abs(y - sy) == 1)){
        if(flag){
            cout << "Valid";
        }
        else{
            cout << "Invalid";
        }       
    }
    else{
        cout << "Invalid";
    }
    return 0;
}