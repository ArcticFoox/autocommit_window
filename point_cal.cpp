//2822 basic
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    pair<int, int> arr[8];

    for(int i = 0; i < 8; i++){
        int num;
        cin >> num;

        arr[i].first = num;
        arr[i].second = i + 1;
    }

    sort(arr, arr+8, greater<pair<int, int>>());

    int sum = 0;
    int num_arr[5];

    for(int i = 0; i < 5; i++){
        sum += arr[i].first;
        num_arr[i] = arr[i].second;
    }

    cout << sum << '\n';

    sort(num_arr, num_arr+5);

    for(int i = 0; i < 5; i++){
        cout << num_arr[i] << ' ';
    }
    return 0;
}