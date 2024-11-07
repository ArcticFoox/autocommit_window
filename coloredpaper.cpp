//2563 implementation
#include<iostream>

using namespace std;

int arr[100][100];
int n, x, y, cnt;

int main(){
    
    cin >> n;

    while(n--){
        cin >> x >> y;
        for(int i = y; i < y + 10; i++){
            for(int j = x; j < x + 10; j++){
                if(!arr[i][j]){
                    cnt++;
                    a[i][j]++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}