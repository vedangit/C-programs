#include<stdio.h>
int main()
{
    int n, a;
    printf("enter the number : ");
    scanf("%d", &n);
    for(int i=0; i<11; i++)
    {
        a = n*i;
        printf("\n%d", a);
    }
    return 0;
}