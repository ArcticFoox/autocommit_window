//elice bitmask
#include<iostream>

using namespace std;

int M, bit, num;
string input;

int main(){
    cin >> M;

    while(M--){
        cin >> input;
        if(input == "insert"){
            cin >> num;
            bit |= (1 << num);
        } else if(input == "delete"){
            cin >> num;
            bit &= ~(1 << num);
        } else if(input == "find"){
            cin >> num;
            if(bit & (1 << num)){
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if(input == "toggle"){
            cin >> num;
            bit ^= (1 << num);
        } else if(input == "fill"){
            bit = (1 << 11) - 1;
        } else if(input == "clear"){
            bit = 0;
        } 
    }

    return 0;
}