//32751 implementation
#include<iostream>

using namespace std;

int main(){
    int n;
    int arr[4] = {0, };
    string str;

    cin >> n;
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    cin >> str;

    if(str[0] == 'a' && str[n - 1] == 'a'){
        bool flag = true;
        char prev = str[0];
        for(int i = 1; i < n; i++){
            if(!arr[str[i] - 'a']){
                flag = false;
                break;
            }

            if(prev == str[i]){
                flag = false;
                break;
            }

            arr[str[i] - 'a']--;
            prev = str[i];
        }

        if(flag){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
    else{
        cout << "No";
    }
    
    return 0;
}