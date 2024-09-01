//1065 brute-force
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;

    if(n < 100){
        cnt = n;
    }
    else{
        cnt = 99;
        for(int i = 100; i <= n; i++){
            string num;
            num = to_string(i);
            
            int dif = (num[1] - '0') - (num[0] - '0');
            bool flag = false;
            for(int j = 1; j < num.size() - 1; j++){
                if(dif != (num[j + 1] - '0') - (num[j] - '0')){
                    flag = true;
                    break;
                }
            }
            if(!flag) cnt++;
        }
    }

    cout << cnt;
    return 0;
}