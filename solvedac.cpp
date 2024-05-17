//18110 math
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    float arr[300001];
    int n;
    cin >> n;

    if(n == 0){
        cout << 0;
        return 0;
    }

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int avg = round(n * 0.15);
    
    double sum = 0.0;
    for(int i = avg; i < n-avg; i++){
        sum += arr[i];
    }

    cout << round(sum / (n - avg * 2));
    return 0;
}