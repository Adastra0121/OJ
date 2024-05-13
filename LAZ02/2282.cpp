#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int shi = n / 10;
    int ge = n % 10;
    cout << ge * 10 + shi << endl;
    return 0;
}