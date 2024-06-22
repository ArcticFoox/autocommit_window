//1003 dp
#include<iostream>

using namespace std;

int dp[41] = { 0, 1, 1 };

int main(){
    int n;
    
    for(int i = 3; i < 41; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 0) cout << 1 << ' ' << 0 << '\n';
        else if(x == 1) cout << 0 << ' ' << 1 << '\n';
        else cout << dp[x-1] << ' ' << dp[x] << '\n';
    }

    return 0;
}