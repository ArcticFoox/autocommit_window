//15656 backtracking
#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int arr[8];
int num[8];

void back(int row){
    if(row == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        arr[row] = num[i];
        back(row + 1);
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    sort(num, num+n);

    back(0);

    return 0;
}