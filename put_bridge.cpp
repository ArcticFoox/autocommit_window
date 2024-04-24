//1010 combination
#include<iostream>

using namespace std;

int t;

int main(){
    cin >> t;
    while(t--){
        long long ans = 1;
        int st, en;
        cin >> st >> en;

        int r = 1;
        for(int j = en; j > en - st; j--){
            ans = ans * j;
            ans = ans / r;
            r++;
        }

        cout << ans << '\n';
    }

    return 0;
}