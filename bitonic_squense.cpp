//11054 dp
#include<iostream>

using namespace std;

int n;
int dp[1001][2];
int arr[1001];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        dp[i][0] = 1;
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j]) dp[i][0] = max(dp[i][0], dp[j][0] + 1);
        }
    }

    for(int i = n - 1; i >= 0; i--){
        dp[i][1] = 1;
        for(int j = n-1; j >= i; j--){
            if(arr[i] > arr[j]) dp[i][1] = max(dp[i][1], dp[j][1] + 1);
        }
    }

    for(int i = 0; i < n; i++){
        sum = max(sum, dp[i][0] + dp[i][1] - 1);
    }
    
    cout << sum;
    return 0;
}