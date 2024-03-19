//16953 dfs
#include<iostream>

using namespace std;

long long A, B;
int Min = 987654321;

void back(long long x, int cnt){
    if(x > B) return;
    else if(x == B){
        Min = min(Min, cnt);
        return;
    }

    back(x * 2, cnt + 1);
    back(x * 10 + 1, cnt + 1);
}

int main(){
    cin >> A >> B;
    back(A, 1);
    if(Min == 987654321) cout << -1;
    else cout << Min;
    return 0;
}