//31562 string
#include<iostream>

using namespace std;

int main(){
    string song[1001][2];
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int cnt;
        string str = "";
        char c;

        cin >> cnt;
        for(int j = 0; j < cnt; j++){
            cin >> c;
            str += c;
        }

        song[i][0] = str;

        str = "";

        for(int j = 0; j < 7; j++){
            cin >> c;
            str += c;
        }

        song[i][1] = str;
    }

    for(int i = 0; i < m; i++){
        string sing = "";
        string str = "";
        int guess = 0;
        char c;
        for(int j = 0; j < 3; j++){
            cin >> c;
            str += c;
        }

        for(int j = 0; j < n; j++){
            if(song[j][1].substr(0, 3) == str){
                guess++;
                sing = song[j][0];
            }
        }

        if(!guess){
            cout << "!\n";
        }
        else if(guess == 1){
            cout << sing << '\n';
        }
        else if(guess >= 2){
            cout << "?\n";
        }
    }
    return 0;
}