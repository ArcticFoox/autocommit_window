//15654 backtracking
#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int arr[8];
int num[8];
bool visit[8];

void back(int row){
    if(row == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        if(visit[i]) continue;
        visit[i] = true;
        arr[row] = num[i];
        back(row+1);
        visit[i] = false;
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