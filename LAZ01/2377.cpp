#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cin >> a >> b >> c;

    int total = (a + b + c) / 2;

    int football = total - b;
    int basketball = total - c;
    int volleyball = total - a;

    cout << football << "\n" << basketball << "\n" << volleyball;
    return 0;
}