//10950 basic
#include<iostream>

using namespace std;

int main(){
    int a, b;
    int n;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}