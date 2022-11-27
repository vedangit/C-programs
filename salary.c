#include<stdio.h>
int main()
{
    int basicp, grossp, netp, hra, ta, pt;
    printf("enter your basic pay : ");
    scanf("%d", &basicp);
    hra = basicp/10;
    ta = basicp/20;
    pt = basicp/50;
    grossp = basicp + hra + ta;
    netp = basicp - pt;
    printf("gross salary is %d\n", grossp);
    printf("net pay is %d", netp);
}