#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", age);
    printf("\n%p", ptr);
    printf("\n%p", *ptr);
    printf("\n%d", _age);

    //& is for the address and * is for the value associated with the address
    //pointer to pointer

    float price = 100.00;
    float *fptr = &price;  // stores address of variable price
    float **fpptr = &fptr; // stores address of pointer ptr (pointer to pointer)

    /* Q] print value of i from its pointer to pointer*/

    int i = 5;
    int *iptr = &i;
    int **ipptr = &iptr;


    int a = *(*ipptr);
    printf("\n%d", a);


    return 0;
}
