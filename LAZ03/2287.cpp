#include<iostream>
using namespace std;
int main(){
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    int time = h * 3600 + m * 60 + s + t;
    time %= (24 * 3600);
    h = time / 3600;
    m = time % 3600 / 60;
    s = time % 3600 % 60;
    cout << h << " " << m << " " << s << endl;
    return 0;
}