//32216 basic
#include<iostream>

using namespace std;

int main(){
    int arr[1001];
    int n, k, t;
    int sum = 0;
    cin >> n >> k >> t;

    for(int i = 0; i < n; i++){
        int cur;
        cin >> cur;
        if(t < k){
            t = t + cur + abs(t - k);
        } else if(t > k){
            t = t + cur - abs(t - k);
        } else{
            t = t + cur;
        }
        arr[i] = t;
    }

    for(int i = 0; i < n; i++){
        sum += abs(arr[i] - k);
    }
    
    cout << sum;
    
    return 0;
}