//17626 dp
#include<iostream>

using namespace std;

int dp[50001];

int main(){
    int n;

    cin >> n;

    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        int Min = 987654321;
        for(int j = 1; j * j <= i; j++){
            int tmp = i - j * j;
            Min = min(Min, dp[tmp]);
        }
        dp[i] = Min + 1;
    }

    cout << dp[n];
    return 0;
}