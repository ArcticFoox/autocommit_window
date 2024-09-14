//1316 brute-force
#include<iostream>

using namespace std;

int n, cnt;

int main(){

    cin >> n;

    for(int i = 0; i < n; i++){
        int alpha[26] = {0, };
        bool flag = false;
        string str;

        cin >> str;

        for(int j = 0; j < str.size(); j++){
            if(!alpha[str[j] - 'a']) alpha[str[j] - 'a']++;
            else{
                if(str[j - 1] != str[j]){
                    flag = true;
                    break;
                }
            }
        }

        if(!flag) cnt++;

    }

    cout << cnt;

    return 0;
}