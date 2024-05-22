//1654 binary_search
#include<iostream>

using namespace std;

unsigned int arr[10000];
unsigned int n, k, Max, ans;

void binary(int num){
    unsigned int st = 1;
    unsigned int en = num;

    while(st <= en){
        unsigned int mid = (st + en) / 2;

        unsigned int sum = 0;
        for(int i = 0; i < k; i++){
            sum += arr[i] / mid;
        }

        if(sum >= n){
            ans = max(ans, mid);
            st = mid + 1;
        }
        else{
            en = mid - 1;
        }
    }
}

int main(){
    cin >> k >> n;

    for(int i = 0; i < k; i++){
        cin >> arr[i];
        Max = max(Max, arr[i]);
    }
    binary(Max);
    cout << ans;

    return 0;
}