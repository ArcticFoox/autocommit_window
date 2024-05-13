//1932 dp
#include<iostream>

using namespace std;

int dp[501][501];

int main(){
    int n, Max = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            int num;
            cin >> dp[i][j];
        }
    }
    
    Max = dp[0][0];

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0) dp[i][j] = dp[i-1][j] + dp[i][j];
            else if(i == j) dp[i][j] = dp[i-1][j-1] + dp[i][j];
            else dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + dp[i][j];
            Max = max(Max, dp[i][j]);
        }
    }

    cout << Max;
    
    return 0;
}