//30804 bruteforce
#include<iostream>
#include<queue>

using namespace std;

int furit[10];
queue<int> q;

int main(){
    int n;
    int cnt = 0;
    int ans = 0;
    int len = 0;

    cin >> n;

    while(n--){
        int num;
        cin >> num;
        q.push(num);
        len++;

        if(!furit[num]) cnt++;
        furit[num]++;

        while(cnt > 2){
            int tmp = q.front();
            furit[tmp]--;
            q.pop();
            len--;
            if(!furit[tmp]) cnt--;
        }

        ans = max(ans, len);
    }

    cout << ans;
    return 0;
}