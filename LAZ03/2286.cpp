#include<iostream>
using namespace std;
int main(){
    int h , m , s;
    cin >> h >> m >> s;
    
    int new_m = s / 60;
    s = s - new_m * 60;
    m += new_m;

    int new_h = m / 60;
    m = m - new_h * 60;
    h += new_h;

    int new_day = h / 24;
    h = h - new_day * 24;


    cout << h << " " << m << " " << s << endl;
    return 0;
}