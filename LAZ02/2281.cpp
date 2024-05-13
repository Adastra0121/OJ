#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int qian = n / 1000;
    int bai = (n - 1000 * qian) / 100;
    int shi = (n - 1000 * qian - 100 * bai) / 10;
    int ge = n % 10;
    if (n == 10000){
        cout << '1' << endl;
    }
    else {
        cout << qian + bai + shi + ge << endl;
    }

    return 0;
}