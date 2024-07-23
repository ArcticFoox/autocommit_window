//1351 dp_and_map
#include<iostream>
#include<map>

using namespace std;

long long n;
int p, q;
map<long long, long long> dp;

long long solve(long long num){
    if(dp.find(num) != dp.end()){
        return dp[num];
    }

    return dp[num] = solve(num / p) + solve(num / q);
}

int main(){
    cin >> n >> p >> q;

    dp[0] = 1;

    if(n == 0){
        cout << 1;
    }
    else{
        cout << solve(n/p) + solve(n/q);
    }
    return 0;
}