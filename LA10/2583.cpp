#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    double a, b, x;
    cin >> a >> b >> x;
    double result = sqrt(a * a + fabs(b)) / pow(x,3.14);
    cout << fixed << setprecision(4) << result << endl;
    return 0;
}