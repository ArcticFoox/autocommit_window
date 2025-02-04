//5648 string(sort)
#include<iostream>
#include<algorithm>

using namespace std;

long long arr[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        reverse(str.begin(), str.end());
        arr[i] = stol(str);
    }

    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}