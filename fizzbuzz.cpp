//28702 math
#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int ans;

int main(){
    string a, b, c;
    cin >> a >> b >> c;

    if(isdigit(a[0])) ans = stoi(a) + 3;
    else if(isdigit(b[0])) ans = stoi(b) + 2;
    else ans = stoi(c) + 1;

    if(ans % 3 == 0 && ans % 5 == 0){
        cout << "FizzBuzz";
    }
    else if(ans % 3 == 0){
        cout << "Fizz";
    }
    else if(ans % 5 == 0){
        cout << "Buzz";
    }
    else{
        cout << ans;
    }

    return 0;
}