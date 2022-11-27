#include<stdio.h>
int main()
{
    /*variable definition*/
    int num, i;

    /*output input*/
    printf("Enter a number : " );
    scanf("%d", &num);
    printf("factors of %d are : \n", num);

    /*loop*/
    for(i = 1; i <= num; ++i)
    {
        if (num%i == 0)
         {
          printf("%d \n", i ,"\n"); 
          }
    }
  return 0;

}