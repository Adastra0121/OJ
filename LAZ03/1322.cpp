#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int hour = x / 3600;
    int minute = x % 3600 / 60;
    int second = x % 3600 % 60;
    cout << hour << " " << minute << " " << second << endl;
    return 0;
}