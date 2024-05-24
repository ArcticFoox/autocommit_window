//18111 bruteforce
#include<iostream>

using namespace std;

int n, m, b;
int board[502][502];
int mn = 987654321;
int h;

int main(){
    cin >> n >> m >> b;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    for(int k = 0; k <= 256; k++){
        int sum = 0, tmp = b;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] < k){
                    sum += k - board[i][j];
                    tmp -= k - board[i][j];
                }
                else if(board[i][j] > k){
                    sum += (board[i][j] - k) * 2;
                    tmp += board[i][j] - k;
                }
                else{
                    continue;
                }
            }
        }

        if(tmp >= 0){
            if(sum <= mn){
                mn = sum;
                h = k;
            }
        }
    }

    cout << mn << " " << h;
    return 0;
}