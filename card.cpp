//11652 map(overflow)
#include<iostream>
#include<map>

using namespace std;

map<long long, int> m;
long long n, ans, Max;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;

    for(int i = 0; i < n; i++){
        long long num;
        cin >> num;
        m[num]++;
    }

    for(auto i : m){
        if(i.second > Max){
            Max = i.second;
            ans = i.first;
        }
    }

    cout << ans;
    return 0;
}