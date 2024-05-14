#include<iostream>


using namespace std;

int main(){
    float x;
    cin >> x;
    if (x <= 15){cout << x * 6 << endl;}
    else {cout << (x-15) * 9 + 15 * 6 << endl;}
    return 0;
}