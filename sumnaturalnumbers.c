#include<stdio.h>
int main()
{
    /*defined variables*/
    int num, count, sum = 0;   

    /*Input number*/
    printf("Enter a number : ", "%d");
    scanf("%d", &num);

    /*loop for sum*/
    /*1. count value is set to 1
      2. for loop will only be executed if the value of count is less than num which IT IS coz count is 1
      3. with each loop, the value of count will increase by 1*/
    for(count = 1; count <= num; ++count )
    {
        sum += count; /* basically means that sum = sum of the previous loop + count*/

    }
    printf("%d", sum); /*ho gaya goodbye*/
    return 0;

}