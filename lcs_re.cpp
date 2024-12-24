//9251 dp
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int dp[1001][1001];

int main(){
    string str1, str2;

    cin >> str1 >> str2;

    int str1_size = str1.size();
    int str2_size = str2.size();

    for(int i = 1; i <= str1_size; i++){
        for(int j = 1; j <= str2_size; j++){
            if(str1[i - 1] == str2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[str1_size][str2_size];

    return 0;
}