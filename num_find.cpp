//1920 binarysearch
#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int arr[100003];

bool binsearch(int target){
    int st = 0, en = n - 1;
    while(st <= en){
        int mid = (st+en)/2;
        if(arr[mid] > target) en = mid - 1;
        else if(arr[mid] < target) st = mid + 1;
        else return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0 ; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        cout << binsearch(num) << '\n';
    } 
    return 0;
}