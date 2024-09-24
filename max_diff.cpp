//10819 backtracking
#include<iostream>

using namespace std;

int arr[9];
int target[9];
bool visit[9] = {false, };
int n;
int Max = -10000;

void back(int row){
    if(row == n){
        int sum = 0;
        for(int i = 0; i < n - 1; i++){
            sum += abs(target[i] - target[i+1]);
        }

        Max = max(Max, sum);
        return;
    }

    for(int i = 0; i < n; i++){
        if(visit[i]) continue;
        visit[i] = true;
        target[row] = arr[i];
        back(row+1);
        visit[i] = false;
    }
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    back(0);

    cout << Max;
    return 0;
}