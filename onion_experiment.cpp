//32369 basic
#include<iostream>

using namespace std;

int main(){
    int n, a, b;
    int onion_a = 1, onion_b = 1;
    int tmp;
    cin >> n >> a >> b;

    for(int i = 0; i < n; i++){
        onion_a += a;
        onion_b += b;

        if(onion_b > onion_a){
            tmp = onion_a;
            onion_a = onion_b;
            onion_b = tmp;
        } else if(onion_b == onion_a){
            onion_b--;
        }
    }

    cout << onion_a << ' ' << onion_b;
    return 0;
}