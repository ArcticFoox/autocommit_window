//1940 two_pointer
#include<iostream>
#include<algorithm>

using namespace std;

int arr[15001];
int n, m;

int main(){
    cin >> n;
    cin >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int st = 0;
    int en = n-1;
    int cnt = 0;

    while(st < en){
        if(arr[en] + arr[st] == m){
            en--;
            st++;
            cnt++;
        }
        else if(arr[en] + arr[st] > m){
            en--;
        }
        else{
            st++;
        }
    }
    cout << cnt;
    return 0;
}