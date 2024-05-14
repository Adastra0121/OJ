#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    char b;
    cin >> a >> b;
    int total;
    if (a <= 1000){total = 8;}
    else {total = 8 + ceil(1.0 * (a - 1000) / 500) * 4; }
    if ( b == 'y'){total += 5;}

    cout << total << endl;
    return 0;
}