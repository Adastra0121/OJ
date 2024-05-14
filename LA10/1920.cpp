#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    long long result = pow(a,n) + pow(b,n) + pow(c,n);
    cout << result << endl;  
    return 0;
}