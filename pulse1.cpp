//31789 if
#include<iostream>

using namespace std;

int main(){
    bool flag = false;
    int n, x, s;
    cin >> n;
    cin >> x >> s;

    for(int i = 0; i < n; i++){
        int c, p;
        cin >> c >> p;

        if(c <= x && p > s){
            flag = true;
        }
    }
    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}