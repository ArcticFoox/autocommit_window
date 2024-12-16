//14503 bfs
#include<iostream>

using namespace std;

int room[51][51];
bool visited[51][51];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, x, y, d;
int ans;

void dfs(int cx, int cy, int cd) {
	if (room[cx][cy] == 0) {
		room[cx][cy] = 2;
		ans++;
	}

	for (int i = 0; i < 4; i++) {
		int nd = (cd + 3 - i) % 4;
		int nx = cx + dx[nd];
		int ny = cy + dy[nd];

		if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
			continue;
		}

		if (room[nx][ny] == 0) {
			dfs(nx, ny, nd);
		}
	}    

	int nd = (cd + 2) % 4;
	int nx = cx + dx[nd];
	int ny = cy + dy[nd];

	if (room[nx][ny] == 1) {
		cout << ans;
		exit(0);
	}
	dfs(nx, ny, cd);
}

int main(){
    cin >> n >> m;
    cin >> x >> y >> d;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> room[i][j];
        }
    }

    dfs(x, y, d);
    return 0;
}