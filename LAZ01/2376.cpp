#include<iostream>
using namespace std;
int main(){
    // x男 y女
    // x - y = a
    // x - b = (y - b) * 2
    // y + a - b = 2y -2b
    // y = a + b
    // x = 2a + b
    int a , b;
    cin >> a >> b;
    cout << 2 * a + b << endl;
    cout << a + b;
    return 0;
}