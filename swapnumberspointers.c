#include<stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    swap(&x, &y);
    printf("x = %d and y = %d\n", x, y);
    return 0;

}

void swap(int *a, int *b)
{
    int t = *a; //stored original value of a in t 
    *a = *b;
    *b = t; //passed orginal valuw of t
    printf("a = %d and b = %d\n", *a, *b);

}