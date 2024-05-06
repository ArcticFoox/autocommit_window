//31776 implementation
#include<iostream>

using namespace std;
//40
int n;

int main(){
    int cnt = 0;
    cin >> n;

    while(n--){
        bool c_flag = false, n_flag = false;
        int cur = 120;
        int arr[3];
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }

        for(int i = 2; i >= 0; i--){
            if(arr[i] == -1){
                if(c_flag){
                    n_flag = true;
                    break;
                }
                continue;
            }

            if(arr[i] <= cur){
                cur = arr[i];
                c_flag = true;
            }
            else{
                n_flag = true;
                break;
            }
        }
        if(!n_flag && c_flag){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}