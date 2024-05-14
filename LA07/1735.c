#include<stdio.h>
// 其实输出宽度和精度是可以使⽤“ * ”号来代替的。
// 这样，printf()函数将会对应地以输出列表中的数据作为输出的宽度和精度。
// 其基本格式如下：
//     printf("%*.*f\n",i,j,k);
int main(){
    int a, w ,p;
    double b;
    scanf("%d%lf%d%d",&a,&b,&w,&p);
    printf("%10d",a);
    printf(" ");
    printf("%*d",w,a);
    printf(" ");
    printf("%0*d\n",w,a);
    printf("%10.2lf ",b);
    printf("%*.*lf ",w,2,b);
    printf("%*.*lf\n",w,p,b);
}