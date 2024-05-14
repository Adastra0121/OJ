#include<iostream>
using namespace std;
void repairTime( int h ,int m ,int s){
    int new_m = s / 60;
    s = s - new_m * 60;
    m += new_m;

    int new_h = m / 60;
    m = m - new_h * 60;
    h += new_h;

    int new_day = h / 24;
    h = h - new_day * 24;

    cout << h << " " << m << " " << s << endl;

}

int main(){
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    // int time = (h1 + h2) * 3600 + (m1 + m2) * 60 + (s1 + s2);
    // cout<< time << endl;
    // time %= (24 * 3600);
    // cout<< time << endl;
    // cout << time / 3600 << " " << time % 3600 / 60 << " " << time % 3600 % 60 << endl;
    repairTime(h1+h2,m1+m2,s1+s2);
    return 0;
}