//25372 basic
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;

        if(6 <= str.size() && str.size() <= 9){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
    }
    return 0;
}