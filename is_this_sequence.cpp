//32752 sort
#include<iostream>
#include<algorithm>

using namespace std;

int arr[100001];

int main(){
    int n, l, r;
    cin >> n >> l >> r;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    sort(arr+l, arr+r+1);

    bool flag = false;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i+1]){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << 0;
    }
    else{
        cout << 1;
    }
    return 0;
}