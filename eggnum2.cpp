//elice binarysearch
#include <iostream>
#include <algorithm>

using namespace std;

int arr[500001];
int n, m;

int lb(int target){
    int st = 0, en = n - 1;
    int mid = 0;
    while(st <= en){
        mid = (st+en) / 2;
        if(arr[mid] < target) st = mid + 1;
        else en = mid - 1;
    }
    return en;
}

int ub(int target){
    int st = 0, en = n - 1;
    int mid = 0;
    while(st <= en){
        mid = (st+en) / 2;
        if(arr[mid] <= target) st = mid + 1;
        else en = mid - 1;
    }
    return en;
}

int main() {
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        cout << ub(num) - lb(num) << ' ';
    }
}
