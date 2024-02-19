//5176 implementation
#include<iostream>

using namespace std;

int main(){
    int K;
    cin >> K;
    while(K--){
        int P, M;
        cin >> P >> M;
        int arr[501] = {0, };
        int cnt = 0;

        for(int i = 0; i < P; i++){
            int num;
            cin >> num;
            if(!arr[num]) arr[num]++;
            else{
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}