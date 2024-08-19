//1009 basic
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int tmp = 1;
        int a, b;
        cin >> a >> b;

        for(int i = 0; i < b; i++){
            tmp = (tmp * a) % 10;
        }

        if(tmp == 0){
            cout << "10\n";
        } else{
            cout << tmp << '\n';
        }
    }
    return 0;
}