#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
    int x,n;
    cin >> x >> n;
    double debt = x * pow(1.06,n);
    cout << fixed << setprecision(2) << debt << endl;
    return 0;
}