#include <stdio.h>
int main() 
{
    //leap year program
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
 
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else {
      printf("%d is not a leap year.", year);
   }

//basic arithmatic operations
int num1;
int num2;

/*Getting user input*/

printf("\nenter first number : ", num1);
scanf("%d", &num1);

printf("\nenter second number : ", num2);
scanf("%d", &num2);

/*Choice input, enter number to */
int choice;
printf("Choose \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n", choice);
scanf("%d", &choice);

switch(choice){
    case 1:
    printf("answer : %d", num1 + num2);
    break;
    
    case 2:
    printf("answer : %d", num1 - num2);
    break;

    case 3:
    printf("answer : %d", num1 * num2);
    break;


    case 4:
    printf("answer : %d", num1/num2);
    break;
}
/*multiplication tables*/
int n, a;
printf("\nenter the number : ");
scanf("%d", &n);
for(int i=0; i<11; i++)
    {
        a = n*i;
        printf("\n%d", a);
    }


   return 0;
}
