#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    long long rabbit = ceil( 100 * pow(a * 0.01 + 1,b));
    cout << rabbit << endl;
    
    return 0;
}