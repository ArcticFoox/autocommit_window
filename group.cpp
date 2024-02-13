//11723 implementation
#include<iostream>
#include<string>

using namespace std;

bool arr[21];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;

    for(int i = 0; i < m; i++){
        string comm;
        cin >> comm;

        int num;

        if(comm == "add"){
            cin >> num;
            if(!arr[num]) arr[num] = true;
        }
        else if(comm == "remove"){
            cin >> num;
            if(arr[num]) arr[num] = false;
        }
        else if(comm == "check"){
            cin >> num;
            cout << arr[num] << '\n';
        }
        else if(comm == "toggle"){
            cin >> num;
            arr[num] = !arr[num];
        }
        else if(comm == "all"){
            for(int j = 1; j <= 20; j++){
                arr[j] = true;
            }
        }
        else if(comm == "empty"){
            for(int j = 1; j <= 20; j++){
                arr[j] = false;
            }
        }
    }
    return 0;
}