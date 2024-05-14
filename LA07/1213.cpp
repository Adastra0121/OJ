#include<stdio.h>
int main(){
    double v,a;
    scanf("%lf %lf",&v,&a);
    double len = v*v / 2 / a;
    printf("%.3lf",len);
}