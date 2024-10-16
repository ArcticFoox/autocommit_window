//15666 backtracking
#include<iostream>
#include<algorithm>

using namespace std;

int arr[9];
int target[9];
int n, m;

void back(int row, int idx){
    if(row == m){
        for(int i = 0; i < m; i++){
            cout << target[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int x = 0;
    for(int i = idx; i < n; i++){
        if(arr[i] != x){
            target[row] = arr[i];
            x = target[row];
            back(row+1, i);
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    back(0, 0);

    return 0;
}