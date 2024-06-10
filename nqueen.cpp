//9663 backtracking
#include<iostream>

using namespace std;

int mat[15];
int n, ans;

bool check(int row){
    for(int i = 0; i < row; i++){
        if(mat[i] == mat[row] || abs(mat[row] - mat[i]) == row - i) return false;
    }
    return true;
}

void back(int row){
    if(row == n){
        ans++;
    }

    for(int i = 0; i < n; i++){
        mat[row] = i;
        if(check(row)){
            back(row+1);
        }
    }
}

int main(){
    cin >> n;
    back(0);
    cout << ans;
    return 0;
}