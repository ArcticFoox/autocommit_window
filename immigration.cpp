//16234 bfs
#include<iostream>
#include<queue>

using namespace std;

int arr[51][51];
bool visited[51][51];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int n, l, r;

queue<pair<int, int>> q;
vector<pair<int, int>> v;

bool flag = true;
int sum = 0;
int days = 0;

void bfs(pair<int, int> st){
    q.push(st);
    visited[st.first][st.second] = true;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= n || visited[nx][ny]) continue;
            if(abs(arr[nx][ny] - arr[cx][cy]) >= l && abs(arr[nx][ny] - arr[cx][cy]) <= r){
                q.push({nx, ny});
                visited[nx][ny] = true;

                v.push_back({nx, ny});
                sum += arr[nx][ny];
            }
        }
    }
}

void clear(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            visited[i][j] = false;
        }
    }
}

int main(){
    cin >> n >> l >> r;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    while(flag){
        flag = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j]){
                    v.clear();
                    v.push_back({i, j});
                    sum = arr[i][j];
                    bfs({i, j});
                }

                if(v.size() >= 2){
                    flag = true;
                    for(int i = 0; i < v.size(); i++){
                        arr[v[i].first][v[i].second] = sum / v.size();
                    }
                }
            }
        }

        if(flag) days++;

        clear();
    }
    cout << days;
    return 0;
}