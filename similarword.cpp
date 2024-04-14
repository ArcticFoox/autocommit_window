//2607 implementation(string)
#include<iostream>
#include<map>

using namespace std;

int dr[26];

int main(){
    int n;
    int ans = 0;
    int drsize = 0;
    cin >> n;

    string str;

    cin >> str;
    drsize = str.size();
    for(int i = 0; i < str.size(); i++){
        dr[str[i] - 'A']++;
    }

    for(int i = 1; i < n; i++){
        cin >> str;
        int arr[26] = {0, };
        
        for(int j = 0; j < 26; j++){
            arr[j] = dr[j];
        }

        int cnt = 0;

        for(int j = 0; j < str.size(); j++){
            if(arr[str[j] - 'A'] > 0){
                arr[str[j] - 'A']--;
                cnt++;
            }
        }

        if(str.size() == drsize){
            if(cnt == drsize || cnt == drsize - 1) ans++;
        }
        else if(drsize - 1 == str.size() && cnt == drsize - 1){
            ans++;
        }
        else if(drsize + 1 == str.size() && cnt == drsize){
            ans++;
        }
    }

    cout << ans;
    return 0;
}