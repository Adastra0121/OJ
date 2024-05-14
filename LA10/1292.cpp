#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double r, h;
    cin >> r >> h;
    long result =round(((r * 3.14 + 2 * r + sqrt(8 * r * r) ) * h + 3.14 * r * r + 4 * r * r) * 10000);
    cout << result << endl;
    return 0;
}