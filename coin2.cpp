//2294 dp
#include<iostream>

using namespace std;

const int MAX = 10001;

int dp[10001];
int n, k;
int coin[101];

int main(){
    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> coin[i];
    for(int i = 1; i <= k; i++) dp[i] = MAX;

    for(int i = 0; i < n; i++){
        for(int j = coin[i]; j <= k; j++){
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }

    if(dp[k] == MAX) cout << -1;
    else cout << dp[k];

    return 0;
}