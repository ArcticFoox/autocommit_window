//14501 dp
#include<iostream>

using namespace std;

int n;
int t[16];
int p[16];
int dp[16];

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> t[i] >> p[i];
    }

    for(int i = n; i >= 1; i--){
        if(i + t[i] - 1 > n){
            dp[i] = dp[i + 1];
            continue;
        }
        dp[i] = max(dp[i + t[i]] + p[i], dp[i + 1]);
    }
    
    cout << dp[1];
    return 0;
}