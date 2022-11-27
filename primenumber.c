/*logic used ----> easy hai code padhle*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, flag;
    printf("enter number of your choice : ");
    scanf("%d", &n);

    if(n == 0 || n == 1) {
     printf("%d is neither a prime number nor a composite number", n); }

    for( i = 2; i < n; ++i)
    {
        if (n%i == 0)
         printf("%d is not a prime number", n); 
        else
         printf("%d is a prime number", n);

       break;
    }


    return 0;
} 
