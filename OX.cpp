//8958 str
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;

        int cnt = 0, sum = 0;
        for(int j = 0; j < str.size(); j++){
            if(str[j] == 'O'){
                cnt++;
                sum += cnt;
            }
            else{
                cnt = 0;
            }
        }

        cout << sum << '\n';
    }
    return 0;
}