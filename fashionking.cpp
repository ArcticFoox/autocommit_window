//9375 map
#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        map<string, int> fashion;
        int m;
        int sum = 1;
        cin >> m;
        for(int j = 0; j < m; j++){
            string str1, str2;
            cin >> str1 >> str2;
            fashion[str2]++;
        }

        for(auto& it : fashion){
            sum = sum * (it.second + 1);
        }
        cout << sum - 1 << '\n';
    }
    return 0;
}