#include<stdio.h>

int main(){
    double f;
    scanf("%lf",&f);
    double c = 5 * (f - 32) / 9;
    printf("%.5lf",c);
}