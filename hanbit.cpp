//31796 greedy
#include<iostream>
#include<algorithm>

using namespace std;

int arr[100001];
int cnt = 1;

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int limit = arr[0] * 2;

    for(int i = 0; i < n; i++){
        if(arr[i] >= limit){
            cnt++;
            limit = arr[i] * 2;
        }
    }

    cout << cnt;

    return 0;
}