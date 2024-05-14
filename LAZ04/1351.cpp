#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, n;
    float b;
    cin >> a >> b >> n;
    float total = a * (b*0.01 *n + 1);
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}