//30404 greedy
#include<iostream>

using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    int cnt = 0;
    int cur = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(cur == 0){
            cnt++;
            cur = num;
        }
        else if(cur + k >= num){
            continue;
        }
        else{
            cnt++;
            cur = num;
        }
    }

    cout << cnt;
    return 0;
}