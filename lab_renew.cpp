//14502 back&dfs
#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int arr[8][8];
int tmp[8][8];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool visit[8 * 8];
int ans = 0;
int n, m;
vector<pair<int, int> > path;

void copy_mat(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            tmp[i][j] = arr[i][j];
        }
    }
}

void bfs(){
    queue<pair<int, int> > q;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 2){
                q.push({i, j});
            }
        }
    }

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >=m) continue;
            if(tmp[nx][ny] == 0){
                tmp[nx][ny] = 2;
                q.push({nx, ny});
            }
        }
    }

    int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(tmp[i][j] == 0){
				cnt++;
			} 
		}
	}
	ans = max(ans, cnt);
}

void back(int cur, int idx){
    if(cur == 3){
        copy_mat();
        int cnt = 0;
		for(int i=0; i < path.size(); i++) {
			if(cnt == 3) break;
			if(visit[i]) {
				int x = path[i].first;
				int y = path[i].second;
				tmp[x][y] = 1;
				cnt++;
			}
		}
		bfs();
		return;
    }

    for(int i = idx; i < path.size(); i++) {
		if(visit[i]) continue;
		visit[i] = true;
		back(cur+1, i);
		visit[i] = false;
	}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 0) {
				path.push_back({i, j});
			}
        }
    }

    back(0, 0);

    cout << ans;
    return 0;
}