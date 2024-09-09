//3190 queue
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int arr[101][101];
bool isbody[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int main(){
    int n, k;
    int sec = 0;
    int dir = 0;
    int q_size = 1;
    cin >> n;
    cin >> k;
    
    int a, b;

    for(int i = 0; i < k; i++){
        cin >> a >> b;
        arr[a-1][b-1] = 1;
    }
    
    int x = 0, y = 0, t, l;
    char c;

    q.push({x, y});

    cin >> l;

    for(int i = 0; i < l; i++){
        cin >> t >> c;

        while(sec < t || i == l - 1){
            sec++;
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || ny < 0 || nx >= n || ny >= n || isbody[ny][nx]){
                cout << sec;
                return 0;
            }

            if(arr[ny][nx] == 1){
                arr[ny][nx] = 0;
                q.push({nx, ny});
                isbody[ny][nx] = true;
            }
            else{
                q.push({nx, ny});
                isbody[ny][nx] = true;
                isbody[q.front().second][q.front().first] = false;
                q.pop();
            }

            x = nx;
            y = ny;
            if(sec == t){
                if(c == 'D'){
                    dir = (dir + 1) % 4;
                }
                else{
                    dir = (dir + 3) % 4;
                }
            }
        }
    }
    
    return 0;
}