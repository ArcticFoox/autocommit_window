//11729 recursion
#include<iostream>

using namespace std;

void func(int a, int b, int n){
    if(n == 0){
        cout << a << ' ' << b << '\n';
        return;
    }

    func(a, 6-a-b, n-1);
    cout << a << ' ' << b << '\n';
    func(6-a-b, b, n-1);
}

int main(){
    int k;
    cin >> k;
    cout << (1<<k) - 1 << '\n';
    func(1, 3, k - 1);
    return 0;
}