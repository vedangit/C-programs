#include<stdio.h>
int fact(int f);
int factwithout(int f);
int main()
//factorial = a(a-1)(a-2)....3*2*1
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Factorial with recursion is %d", fact(a));
    printf("\n%d", factwithout(a));
    /*factorial with recursion*/
    return 0;
}
int fact(int f)
{
    if (f==1)
    {
        return 1;
    }

    int factfm1 = fact(f-1);
    int factf = factfm1*f;
    
    return factf;
    
}
int factwithout(int f)
{
    int fact = 1;
    for(int i = 1; i<=f; i++)
    {
        fact = fact*i;

    }
    printf("\nfactorial wihout recusion is %d", fact);
}