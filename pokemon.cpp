//1620 map
#include<iostream>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main(){
    map<string, int> pokemon;
    string arr[100001];
    string ans[100001];
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        string str;
        cin >> str;
        arr[i] = str;
        pokemon[str] = i;
    }

    for(int i = 0; i < m; i++){
        string str;
        cin >> str;
        if(isdigit(str[0])){
            int index = stoi(str);
            ans[i] = arr[index];
        }
        else{
            ans[i] = to_string(pokemon[str]);
        }
    }

    for(int i = 0; i < m; i++){
        cout << ans[i] << '\n';
    }
    return 0;
}