//1107 bruteforce
#include<iostream>
#include<string>

using namespace std;

int n, m;
bool button[10];
int ans;

bool btn(int num){
    string str = to_string(num);

    for(int i = 0; i < str.size(); i++){
        if(button[str[i] - 48]) return false;
    }
    return true;
}

int main(){
    cin >> n;
    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        button[num] = true;
    }

    if(n == 100){
        cout << 0;
        return 0;
    }

    ans = abs(n - 100);

    for(int i = 0; i <= 1000000; i++){
        if(btn(i)){
            int temp = abs(n - i) + to_string(i).size();
            ans = min(ans, temp);
        }
    }

    cout << ans;
    
    return 0;
}