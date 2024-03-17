//2577 array
#include<iostream>
#include<string>

using namespace std;

int num[10];

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a * b * c;

    string s = to_string(sum);

    for(int i = 0; i < s.size(); i++){
        num[s[i] - '0']++;
    }

    for(int i = 0; i < 10; i++){
        cout << num[i] << '\n';
    }
    return 0;
}