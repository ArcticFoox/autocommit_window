//2491 dp
#include<iostream>
#include<algorithm>

using namespace std;

int indp[100001];
int dedp[100001];
int Max;

int main(){
    int n;
    cin >> n;
    
    int cur;
    cin >> cur;
    indp[0] = 1;
    dedp[0] = 1;
    int incnt = 1;
    int decnt = 1;

    if(n == 1){
        Max = max({Max, dedp[0], indp[0]});
    }

    for(int i = 1; i < n; i++){
        int num;
        cin >> num;
        if(cur < num){
            cur = num;
            incnt++;
            indp[i] = incnt;
            decnt = 1; 
        }
        else if(cur == num){
            incnt++;
            decnt++;
            indp[i] = incnt;
            dedp[i] = decnt;
        }
        else{
            cur = num;
            decnt++;
            dedp[i] = decnt;
            incnt = 1;
        }
        Max = max({Max, dedp[i], indp[i]});
    }

    cout << Max;
    return 0;
}