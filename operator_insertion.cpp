//14888 backtracking
#include<iostream>

using namespace std;

int Max = -1000000000;
int Min = 1000000000;
int op[4];
int arr[11];
int n;


void back(int sum, int row){
    if(row == n){
        Max = max(Max, sum);
        Min = min(Min, sum);
        return;
    }

    for(int i = 0; i < 4; i++){
        if(op[i] > 0){
            op[i]--;
            if(i == 0){
                back(sum + arr[row], row+1);
            } else if(i == 1){
                back(sum - arr[row], row+1);
            } else if(i == 2){
                back(sum * arr[row], row+1);
            } else if(i == 3){
                back(sum / arr[row], row+1);
            }
            op[i]++;
        }
    }
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 4; i++){
        cin >> op[i];
    }

    back(arr[0], 1);
    cout << Max << '\n' << Min;
    return 0;
}