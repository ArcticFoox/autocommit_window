//2096 dp
#include<iostream>
#include<algorithm>

using namespace std;

int maxdp[3];
int mindp[3];

int main(){
    int n;
    cin >> n;

    int a, b, c;

    cin >> a >> b >> c;

    maxdp[0] = a;
    maxdp[1] = b;
    maxdp[2] = c;

    mindp[0] = a;
    mindp[1] = b;
    mindp[2] = c;

    for(int i = 1; i < n; i++){
        cin >> a >> b >> c;
        int tmp0 = maxdp[0];
        int tmp2 = maxdp[2];
        maxdp[0] = max(maxdp[0], maxdp[1]) + a;
        maxdp[2] = max(maxdp[1], maxdp[2]) + c;
        maxdp[1] = max({tmp0, maxdp[1], tmp2}) + b;
        
        tmp0 = mindp[0];
        tmp2 = mindp[2];
        mindp[0] = min(mindp[0], mindp[1]) + a;
        mindp[2] = min(mindp[1], mindp[2]) + c;
        mindp[1] = min({tmp0, mindp[1], tmp2}) + b;
    }

    cout << max({maxdp[0], maxdp[1], maxdp[2]}) << ' ' << min({mindp[0], mindp[1], mindp[2]});

    return 0;
}