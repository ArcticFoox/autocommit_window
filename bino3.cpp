//11401 div&conq
#include<iostream>
#include<cmath>

using namespace std;

long long n, k, a, b, half;
long long mod = 1000000007;

long long solve(int x){
    if(x == 0) return 1;
    if(x % 2 == 1) return b * solve(x - 1) % mod;
    else{
        half = solve(x / 2);
        return half * half % mod;
    }
}

int main(){
    cin >> n >> k;
    a = 1;
    for(int i = n; i >= n - k + 1; i--) a = (a * i) % mod;

    b = 1;
    for(int i = 1; i <= k; i++) b = (b * i) % mod;

    b = solve(mod - 2);

    cout << a * b % mod;
    return 0;
}