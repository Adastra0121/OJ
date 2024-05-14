#include<iostream>
using namespace std;
int main(){
    int h1,m1,s1,h2,m2,s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    int time1 = h1 * 3600 + m1 * 60 + s1;
    int time2 = h2 * 3600 + m2 * 60 + s2;
    
    int h3 = (time2 - time1) / 3600;
    int m3 = (time2 - time1) % 3600 / 60;
    int s3 = (time2 - time1) % 3600 % 60;

    cout << h3 << ' ' << m3 << ' ' << s3 << endl;
    return 0;
}