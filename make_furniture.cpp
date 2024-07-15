//elice2 binarysearch
#include<iostream>

using namespace std;

int n, m, height[1000001];

bool check(int target){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += max(0, height[i]-target);
    }
    return sum >= m;
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> height[i];
    }    

    int st = 0, en = 1000000000;
    while(st + 1 < en){
        int mid = (st+en) / 2;
        if(check(mid)) st = mid;
        else en = mid;
    }

    cout << st;
    return 0;
}