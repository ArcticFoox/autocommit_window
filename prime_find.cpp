//1978 math
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        bool flag = false;

        if(num == 1) continue;
        for(int j = 2; j < num; j++){
            if(num % j == 0){
                flag = true;
                break;
            }
        }

        if(!flag) cnt++;
    }
    cout << cnt;
    return 0;
}