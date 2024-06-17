//17404 dp
#include<iostream>

using namespace std;

int arr[1001][3];
int dp[1001][3];
int ans = 987654321;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int r = 0; r < 3; r++){

        for(int i = 0; i < 3; i++){
            if(i == r) dp[0][i] = arr[0][i];
            else dp[0][i] = 987654321;
        }

        for(int i = 1; i < n; i++){
            dp[i][0] = arr[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = arr[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = arr[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
        }

        for(int i = 0; i < 3; i++){
            if(i == r) continue;
            else ans = min(ans, dp[n-1][i]);
        }
    }

    cout << ans;
    return 0;
}