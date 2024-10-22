//2961 backtracking
#include<iostream>
#include<limits.h>

using namespace std;

int n;
int teast[11][2];
int Min = INT_MAX;

void back(int row, int idx, int sour, int bitter){
    if(row == n){
        if(idx > 0) Min = min(Min, abs(bitter - sour));
        return;
    }

    back(row+1, idx, sour, bitter);
    back(row+1, idx+1, sour * teast[row][0], bitter + teast[row][1]);
    
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> teast[i][0] >> teast[i][1];
    }

    back(0, 0, 1, 0);
    cout << Min;
    return 0;
}