#include<iostream>
using namespace std;
int main(){
    // 8x-3 = 7x+4
    // x= 7 ;53
    int a,x,y;
    cin >> a >> x >> y;
    //人数
    int count = x + y;
    //物价
    int price = count * a - x;
    cout << count << " " << price << endl;
    return 0;
}