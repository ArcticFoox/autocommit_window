//5622 implementation
#include<iostream>

using namespace std;

int main(){
    int cnt = 0;
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] <= 'C'){
            cnt += 3;
        }
        else if(str[i] <= 'F'){
            cnt += 4;
        }
        else if(str[i] <= 'I'){
            cnt += 5;
        }
        else if(str[i] <= 'L'){
            cnt += 6;
        }
        else if(str[i] <= 'O'){
            cnt += 7;
        }
        else if(str[i] <= 'S'){
            cnt += 8;
        }
        else if(str[i] <= 'V'){
            cnt += 9;
        }
        else if(str[i] <= 'Z'){
            cnt += 10;
        }
    }

    cout << cnt;
    return 0;
}