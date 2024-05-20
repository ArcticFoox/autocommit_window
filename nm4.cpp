//15652 back
#include<iostream>
#include<vector>

using namespace std;

int arr[8];
int n, m;

void back(int cnt, int idx){
    if(cnt == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }

    else{
        for(int i = idx; i <= n; i++){
            arr[cnt] = i;
            back(cnt+1, i);
        }
    }

    return;
}

int main(){
    cin >> n >> m;

    back(0, 1);
    return 0;
}