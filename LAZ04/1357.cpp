#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << fixed<< setprecision(0) << pow(2,n-1) << endl;
    return 0;
}