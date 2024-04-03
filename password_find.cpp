//17219 map
#include<iostream>
#include<map>

using namespace std;

map<string, string> password;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string site, pass;
        cin >> site >> pass;
        password[site] = pass;
    }

    for(int i = 0; i < m; i++){
        string site;
        cin >> site;
        cout << password[site] << '\n';
    }

    return 0;
}