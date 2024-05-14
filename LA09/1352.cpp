#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int h, r;
    cin >> h >> r;
    double bottle = h * 3.14 * r * r;
    cout << ceil(20000 / bottle) << endl;
    return 0;
}