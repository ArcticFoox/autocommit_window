//30802 math
#include<iostream>

using namespace std;

int arr[6];

int main(){
    int n, t, p;
    cin >> n;

    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    cin >> t >> p;

    int tsum = 0;

    for(int i = 0; i < 6; i++){
        tsum += (arr[i] % t ? arr[i] / t + 1 : arr[i] / t);
    }

    cout << tsum << '\n';
    cout << n / p << ' ' << n % p;

    return 0;
}