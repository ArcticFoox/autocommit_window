//17266 math
#include<iostream>

using namespace std;

int n, m;
int arr[1000001];
int ans = 1;

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++){
        if(i == 0) ans = max(ans, arr[i]);
        else ans = max(ans, (arr[i] - arr[i - 1] + 1) / 2);
        if(i == m - 1) ans = max(ans, n - arr[i]);
    }
    cout << ans;
    return 0;

}