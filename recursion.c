#include<stdio.h>
//function calls itself inside itself huhhuhuh
void printHW(int count);
int sum(int n);
int fact(int f);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Sum = %d ", sum(n));

    int f;
    printf("Enter fact : ");
    scanf("%d", &f);
    printf("Fact = %d", fact(f));
    printHW(10);
    return 0;
}

void printHW(int count)
{
    if (count ==0)
    {
        return;
    }

    printf("\nHELLOW WORLD \n");
    printHW(count -1); // see???? it called itself
}

int sum(int n)
{

    /*base condition ---> without the base cond to stop the program, stack overflow will occur--> prgram will crash
    ---> if the number enetered is one, the sum returned wil be 1.*/
    if(n==1)
    {
        return 1;
    }

    int sumnm1 = sum(n-1);
    int sumn = sumnm1 + n;
    return sumn;
    printf("%d" ,sum(n));
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
    printf("%d", fact(f));
}
