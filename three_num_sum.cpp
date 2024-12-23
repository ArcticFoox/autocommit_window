//2295 binary_search
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[1001];
vector<int> v;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            v.push_back(arr[i] + arr[j]);
        }
    }
    
    sort(arr, arr + n);
    sort(v.begin(), v.end());

    for(int i = n - 1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            int a = arr[i] - arr[j];
            bool flag = binary_search(v.begin(), v.end(), a);
            if(flag){
                cout << arr[i] << '\n';
                return 0;
            }
        }
    }

    return 0;
}