//20499 string
#include<iostream>
#include<string>

using namespace std;

int main(){
    int kda[3] = { 0, };
    string str;

    cin >> str;

    string tmp = "";
    int idx = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '/'){
            kda[idx] = stoi(tmp);
            tmp = "";
            idx++;
        } else{
            tmp += str[i];
        }
    }

    kda[2] = stoi(tmp);

    if(kda[0] + kda[2] < kda[1] || kda[1] == 0){
        cout << "hasu";
    }
    else{
        cout << "gosu";
    }

    return 0;
}