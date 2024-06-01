//2559 dp
#include<iostream>

using namespace std;

int dp[100001];

int main(){
    int n, k, num, ans = -10000001;

    cin >> n >> k;
    
    for(int i = 1; i <= n; i++){
        cin >> num;
        dp[i] = num + dp[i - 1];
    }
    int st = 0;
    for(int i = k; i <= n; i++){
        ans = max(ans, dp[i] - dp[st]);
        st++;
    }

    cout << ans;
    return 0;
}