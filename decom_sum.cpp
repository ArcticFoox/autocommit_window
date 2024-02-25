//2231 bruteforce
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    int Min = 1000000;
    int sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        string num;
        sum = i;
        num = to_string(i);
        for(int j = 0; j < num.size(); j++){
            sum += num[j] - '0';
        }

        if(sum == n && Min > i){
            Min = i;
        }
    }
    if(Min == 1000000) cout << '0';
    else cout << Min;
    return 0;
}