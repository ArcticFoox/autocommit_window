//1388 dfs
#include <iostream>
#define MAX 51

using namespace std;

int n, m;
string arr[MAX];
bool visited[MAX][MAX];

void dfs(int x, int y) {
	visited[x][y] = true;

	int d[] = { -1, 1 };

	for (int i = 0; i < 2; i++) {
		int nx = x, ny = y;
		if (arr[x][y] == '|'){
			nx += d[i];
		}
		else {
			ny += d[i];
		}
		if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

		if (arr[nx][ny] != arr[x][y])
			continue;

		if (visited[nx][ny])
			continue;
		dfs(nx, ny);
	}
}

int main() {
	cin.tie(NULL);
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j])
				continue;
			else {
				dfs(i, j);
				res++;
			}
		}
	}

	cout << res << endl;

	return 0;
}