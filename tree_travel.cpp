//1991 tree_travel
#include<iostream>

using namespace std;

pair<char, char> arr[26];
int n;

void preorder(char x){
    if(x != '.'){
        cout << x;
        preorder(arr[x - 'A'].first);
        preorder(arr[x - 'A'].second);
    }
}

void inorder(char x){
    if(x != '.'){
        inorder(arr[x - 'A'].first);
        cout << x;
        inorder(arr[x - 'A'].second);
    }
}

void postorder(char x){
    if(x != '.'){
        postorder(arr[x - 'A'].first);
        postorder(arr[x - 'A'].second);
        cout << x;
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        char p, l, r;
        cin >> p >> l >> r;

        arr[p - 'A'].first = l;
        arr[p - 'A'].second = r;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');

    return 0;
}