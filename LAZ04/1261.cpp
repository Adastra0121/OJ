#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
    int x, n;
    cin >> x >> n;

    double popluation = x * pow(1.001,n);
    cout << fixed << setprecision(4) << popluation <<endl;
    return 0;
}