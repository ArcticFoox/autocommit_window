//2096 dp
#include<iostream>
#include<algorithm>

using namespace std;

int n;
int Max[3];
int Min[3];
int a, b, c, tmp0, tmp2;

int main(){
    cin >> n;

    cin >> a >> b >> c;

    Max[0] = a;
    Max[1] = b;
    Max[2] = c;

    Min[0] = a;
    Min[1] = b;
    Min[2] = c;

    n--;

    while(n--){
        cin >> a >> b >> c;

        tmp0 = Max[0];
        tmp2 = Max[2];

        Max[0] = max(Max[0], Max[1]) + a;
        Max[2] = max(Max[1], Max[2]) + c;
        Max[1] = max({tmp0, Max[1], tmp2}) + b;

        tmp0 = Min[0];
        tmp2 = Min[2];

        Min[0] = min(Min[0], Min[1]) + a;
        Min[2] = min(Min[1], Min[2]) + c;
        Min[1] = min({tmp0, Min[1], tmp2}) + b;

    }

    cout << max({Max[0], Max[1], Max[2]}) << ' ' << min({Min[0], Min[1], Min[2]});

    return 0;
}