//23599 greedy(reduce memory)
#include<iostream>
#include<algorithm>

using namespace std;

int arr[100001];
int n, x, ans;

int main(){
    cin >> n >> x;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arr[i] = a - b;
        ans += b;
        x -= 1000;
    }

    sort(arr, arr+n, greater<int>());

    for(int i = 0; i < n; i++){
        if(x >= 4000){
            if(arr[i] > 0){
                ans += arr[i];
                x -= 4000;
            }
        }
        else{
            break;
        }
    }

    cout << ans;
    return 0;
}