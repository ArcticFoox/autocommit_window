//1261/2 array
#include<iostream>

using namespace std;

char arr[101][101];
int n, m, idx;

int main(){
    bool flag;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        flag = true;
        for(int j = 0; j < n; j++){
            if(arr[j][i] == 'O'){
                flag = false;
                break;
            }
        }
        if(flag){
            idx = i + 1;
            break;
        }
    }

    if(flag){
        cout << idx;
    }
    else{
        cout << "ESCAPE FAILED";
    }

    return 0;
}