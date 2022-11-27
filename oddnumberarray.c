#include<stdio.h>

int oddnum(int arr[], int n);

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6, 7};
    int j;

    for (j = 0; j < 7; j++) {
    printf("%d \t", ar[j]);
}
    printf("%d", oddnum(ar, 7));
    return 0;

}

int oddnum(int arr[], int n)
{
    
    for(int i = 0; i<n; i++)
    {
        if (arr[i]%2 != 0);
        {
            printf("%d", i);
        }
    }
    return 0;
    printf("%d", i);
}