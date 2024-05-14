#include<iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    if(m < 25){cout << 25-m << endl;}
    else if (m == 25)
    {
        cout << 0 << endl;
    }
    else if (35 < m <= 59)
    {
        cout << 60 + 25 - m <<endl;
    }
    
    return 0;
}