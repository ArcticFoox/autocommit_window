//14620 backtracking
#include<iostream>

using namespace std;

int n;
int arr[11][11];
bool visited[11][11];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int Min = 987654321;

void resetDir(int x, int y) {
	visited[x][y] = false;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		visited[nx][ny] = false;	
	}
}

int sumDir(int x, int y) {
	
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (visited[nx][ny]) {
			return -1;
		}	
	}
	
	int sum = arr[x][y];
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		visited[nx][ny] = true;
		sum += arr[nx][ny];
	}
	return sum;
}

void dfs(int x, int y, int cnt, int cost){
    if(cnt == 3){
        Min = min(Min, cost);
        return;
    }

    for (int i = x; i < n - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			if (visited[i][j])continue;
			int sum = sumDir(i, j);
			if(sum!=-1) {
				dfs(i, j, cnt + 1, cost + sum);
				resetDir(i, j);
			}
		}
	}
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < n - 1; j++){
            int sum= sumDir(i, j);
			dfs(i, j, 1, sum);
			resetDir(i, j);
        }
    }

    cout << Min;

    return 0;
}