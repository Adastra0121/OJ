#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int a, n;
    double b;
    cin >> a >> b >> n;
    double multiple = pow(b*0.01 +1,n);
    double total = a *  multiple;
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}