//10818 math
#include<iostream>

using namespace std;

int main(){
    int Max = -1000000;
    int Min = 1000000;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        Max = max(Max, num);
        Min = min(Min, num);
    }
    cout << Min << ' ' << Max;
    return 0;
}