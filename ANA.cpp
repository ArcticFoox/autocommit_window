//32401 bruteforce
#include<iostream>

using namespace std;

int main(){
    int n;
    int ans = 0;
    int a_cnt = 0;
    int n_cnt = 0;
    cin >> n;
    string str;
    cin >> str;

    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            a_cnt++;
        }
        if(str[i] == 'N' && a_cnt == 1){
            n_cnt++;
        }

        if(a_cnt == 2){
            if(n_cnt == 1){
                ans++;
            }
            a_cnt = 1;
            n_cnt = 0;
        }
    }

    cout << ans;

    return 0;
}