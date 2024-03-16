//25305 sort
#include<iostream>
#include<algorithm>

using namespace std;

int arr[1001];
int n;
int k;

int main(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << arr[n - 1 - (k - 1)];
    return 0;
}