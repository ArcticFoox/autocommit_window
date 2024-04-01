//1261/3 dp
#include<iostream>

using namespace std;

int arr[100001];
long long dp[100001][2];

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    dp[0][0] = 0;
    dp[0][1] = arr[0];
    
    for(int i = 1; i < n; i++){
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = min(dp[i - 1][0] + arr[i], dp[i - 1][1] + arr[i]); 
        // 위 dp[i][1]에서 전에 것을 선택했더라도 선택할 수는 경우가 있음을 생각해야함
    }

    cout << min(dp[n - 1][0], dp[n - 1][1]);
    return 0;
}