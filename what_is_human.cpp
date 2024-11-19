//32651 basic
#include<iostream>

using namespace std;

bool num[100001];

int main(){
    for(int i = 1; i * 2024 <= 100000; i++){
        num[i * 2024] = true;        
    }

    int n;
    cin >> n;

    if(n > 100000) cout << "No";
    else if(num[n]) cout << "Yes";
    else cout << "No";
    return 0;
}