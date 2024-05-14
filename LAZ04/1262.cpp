#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int r,n,y;
    cin >> r >> n >> y;
    long  total = pow(r * 0.01 +1,y) * n;
    cout << total << endl;
    return 0;
}