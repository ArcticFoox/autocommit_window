//14910 basic
#include<iostream>

using namespace std;

int main(){
    bool flag = true;

    int prev, cur;
    scanf("%d", &prev);
    while(scanf("%d", &cur) != EOF){
        if(flag && prev > cur) flag = false;
        prev = cur;
    }

    if(flag) cout << "Good";
    else cout << "Bad";

    return 0;
}