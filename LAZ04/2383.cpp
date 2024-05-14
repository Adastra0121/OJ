#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double fuli(int a,double b,int n){
    double multiple = pow(b+1,n);
    double total = a *  multiple;
    return total;
}

double danli(int a,double b,int n){
    float total = a * (b *n + 1);
    return total;
}

int main(){
    int n;
    float x, y;
    cin >> n >> x >> y;
    double fuli1 = fuli(n,x,10);
    double danli1 = danli(n,y,10);
    int cha = (int)(fuli1 - danli1);
    cout << cha << endl;
    return 0;
}