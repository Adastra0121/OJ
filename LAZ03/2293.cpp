#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int time1 = x1 * 60 + y1;
    int time2 = x2 * 60 + y2;
    if (time1 > time2){
        cout << time2 + 24 * 60 - time1 << endl;
    } else{
        cout << time2 - time1 << endl;
    }
    return 0;
}