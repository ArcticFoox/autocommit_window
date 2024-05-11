//11651 sort
#include<iostream>
#include<algorithm>

using namespace std;

pair<int, int> arr[100001];

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr+n, comp);

    for(int i = 0; i < n; i++){
        cout << arr[i].first << ' ' << arr[i].second << '\n';
    }
    return 0;
}