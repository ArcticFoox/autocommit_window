//2675 string
#include<iostream>

using namespace std;

string str;
int n, t;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        cin >> str;

        for(int i = 0; i < str.size(); i++){
            for(int j = 0; j < n; j++){
                cout << str[i];
            }
        }
        cout << '\n';
    }

    return 0;
}