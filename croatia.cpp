//2941 string
#include<iostream>

using namespace std;


int main(){
    string croatian[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

    int idx;
    string str;
    cin >> str;

    for(int i = 0; i < 8; i++){
        while(true){
            if(str.find(croatian[i]) != -1){
                str.replace(str.find(croatian[i]),  croatian[i].length() , "#"); 
            } 
            else{
                break;
            }
        }
    }
    cout << str.size();
    return 0;
}