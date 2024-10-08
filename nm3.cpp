//15651 backtracking
#include<iostream>

using namespace std;

int n, m;
int arr[7];

void back(int row){
    if(row == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        arr[row] = i;
        back(row + 1);
    }
}

int main(){
    cin >> n >> m;

    back(0);
    return 0;
}