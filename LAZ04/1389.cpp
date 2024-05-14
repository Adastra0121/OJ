#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    double multiple = pow(1.72,k);
    int rabbit = ceil(n * multiple);
    cout << rabbit << endl;
    return 0;
}