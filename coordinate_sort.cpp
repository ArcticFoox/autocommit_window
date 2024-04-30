//11650 sort
#include<iostream>
#include<algorithm>

using namespace std;

pair<int, int> arr[100001];

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second < b.second;
    else return a.first < b.first;
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