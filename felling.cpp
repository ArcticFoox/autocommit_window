//2805 binarysearch
#include<iostream>

using namespace std;

int n;
long long m;
int Max;
int arr[1000001];
int result;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        Max = max(Max, arr[i]);
    }

    int st = 1;
    int en = Max;
    while(st <= en){
        int mid = (st+en)/2;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > mid){
                sum += arr[i] - mid;
            }
        }
        if(sum < m) en = mid - 1;
        else{
            result = mid;
            st = mid + 1;
        }
    }
    cout << result;

    return 0;
}