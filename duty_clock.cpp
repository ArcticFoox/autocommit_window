//33277 math
#include<iostream>
#include<string>

using namespace std;

int main(){
    float total, cur;
    string ans;

    cin >> total >> cur;

    int time = (cur / total) * (24 * 60) ;

    int h = time / 60;
    if(h < 10){
        ans += '0';
    }
    ans += to_string(h);
    ans += ':';

    int m = time % 60;
    if(m < 10){
        ans += '0';
    }
    ans += to_string(m);
    
    cout << ans;
    return 0;
}