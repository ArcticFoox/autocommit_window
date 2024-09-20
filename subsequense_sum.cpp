//1182 backtracking
#include<iostream>

using namespace std;

int n, s;
int arr[21];
int cnt;

void back(int cur, int sum){
    if(cur == n){
        if(sum == s) cnt++;
        return;
    }

    back(cur+1, sum);
    back(cur+1, sum + arr[cur]);
}

int main(){
    cin >> n >> s;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    back(0, 0);

    if(s == 0) cnt--;

    cout << cnt;

    return 0;
}