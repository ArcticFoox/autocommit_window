//11722 dp
#include<iostream>

using namespace std;

int n;
int dp[1001];
int arr[1001];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(arr[i] < arr[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
        sum = max(sum, dp[i]);
    }
    
    cout << sum;
    return 0;
}