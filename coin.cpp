//9084 dp
#include<iostream>

using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int coin[21] = {0, };
        int dp[10010] = {0, };

        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> coin[i];
        }

        int m;
        cin >> m;

        dp[0] = 1;

        for(int i = 0; i < n; i++){
            for(int j = coin[i]; j <= m; j++){
                dp[j] = dp[j] + dp[j - coin[i]];
            }
        }

        cout << dp[m] << '\n';
    }

    return 0;
}