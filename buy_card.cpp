//11052 dp
#include<iostream>

using namespace std;

int arr[1002];
int dp[1002];

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    dp[0] = 0;
    dp[1] = arr[1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i] = max(dp[i], dp[i - j] + arr[j]);
        }
    }

    cout << dp[n];
    return 0;
}