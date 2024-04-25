//10814 sort
#include<iostream>
#include<algorithm>

using namespace std;

pair<pair<int, string>, int> arr[100001];

bool comp(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b){
    if(a.first.first == b.first.first){
        return a.second < b.second;
    }
    
    return a.first.first < b.first.first;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i].first.first >> arr[i].first.second;
        arr[i].second = i;
    }

    sort(arr, arr + n, comp);

    for(int i = 0; i < n; i++){
        cout << arr[i].first.first << ' ' << arr[i].first.second << '\n';      
    }
    return 0;
}