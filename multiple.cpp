//2588 math
#include<iostream>
#include<string>

using namespace std;

int main(){
    int A;
    string B;

    cin >> A;
    cin >> B;

    cout << A * (B[2] - '0') << "\n";
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * stoi(B);
    return 0;
}