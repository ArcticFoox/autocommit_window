//18312 basic
#include<iostream>

using namespace std;

int n, k, cnt;

int main(){
    cin >> n >> k;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= 59; j++){
            for(int l = 0; l <= 59; l++){
                if(i / 10 == k || i % 10 == k || j / 10 == k || j % 10 == k || l / 10 == k || l % 10 == k){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}