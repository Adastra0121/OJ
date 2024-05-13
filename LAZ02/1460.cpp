#include<iostream>
using namespace std;
int encrypt(int num){
    switch (num)
    {
        case 9:
            return 0;
        case 8:
            return 1;
        case 7:
            return 2;
        case 6:
            return 3;
        case 5:
            return 4;
        case 4:
            return 5;
        case 3:
            return 6;
        case 2:
            return 7;
        case 1:
            return 8;
        case 0:
            return 9;
    }
}


int main(){
    int n;
    cin >> n;
    int qian = n / 1000;
    int bai = (n - 1000 * qian) / 100;
    int shi = (n - 1000 * qian - 100 * bai) / 10;
    int ge = n % 10;


//加密
    ge = encrypt(ge);
    shi = encrypt(shi);
    bai = encrypt(bai);
    qian = encrypt(qian);

    int code = ge * 1000 + shi * 100 + bai * 10 + qian;
//针对千位数是0
    if (code > 999){cout << code << endl;}
    else {cout << "0" << code << endl;}
    return 0;
}