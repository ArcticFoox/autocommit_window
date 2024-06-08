//11444 div&conq
#include<iostream>
#include<map>

#define DIV 1000000007LL
using namespace std;

map<long long, long long> f;

long long fibo(long long n){
    if(n <= 1) return n;
    if(n == 2) return 1;
    if(f.count(n) > 0) return f[n];

    if(n % 2 == 0){
        long long m = n / 2;
        long long temp1 = fibo(m - 1);
        long long temp2 = fibo(m);
        f[n] = ((2LL * temp1 + temp2) * temp2) % DIV;
        return f[n];
    }
    long long m = (n + 1) / 2;
    long long temp1 = fibo(m);
    long long temp2 = fibo(m - 1);
    f[n] = (temp1 * temp1 + temp2 * temp2) % DIV;
    return f[n];
}

int main(){
    long long n;
    cin >> n;
    cout << fibo(n);
    return 0;
}