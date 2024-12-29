//32941 basic
#include<iostream>

using namespace std;

int main(){
    int t, x, n;
    bool aval = true;
    cin >> t >> x;
    cin >> n;

    for(int i = 0; i < n; i++){
        int k;
        bool flag = false;

        cin >> k;

        for(int j = 0; j < k; j++){
            int a;
            cin >> a;

            if(a == x){
                flag = true;
            }
        }

        if(!flag){
            aval = false;
        }
    }

    if(aval){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}