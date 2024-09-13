//14889 backtracking
#include<iostream>

using namespace std;

int arr[21][21];
bool visit[21];
int n;
int Min = 987654321;

void back(int row, int idx){
    if(row == n / 2){
        int sum_a = 0, sum_b = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(visit[i] && visit[j]){
                    sum_a += arr[i][j];
                }
                if(!visit[i] && !visit[j]){
                    sum_b += arr[i][j];
                }
            }
        }

        int diff = sum_a >= sum_b ? sum_a - sum_b : sum_b - sum_a;
        if(diff < Min){
            Min = diff;
        }

        return;
    }

    for(int i = idx; i < n; i++){
        visit[i] = true;
        back(row+1, i+1);
        visit[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    back(0, 0);

    cout << Min;
    return 0;
}