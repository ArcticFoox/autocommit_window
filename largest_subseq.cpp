//11055 dp
#include<iostream>

using namespace std;

int arr[1001];
int dp[1001];
int n;
int ans;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        dp[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
        ans = max(ans, dp[i]);
    }
    
    cout << ans;
    return 0;
}