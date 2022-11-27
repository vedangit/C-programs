#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1;
int num2;
int a;

/*Getting user input*/



/*Choice input, enter number to */
int choice;
printf("Choose \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Factorial", choice);
scanf("%d", &choice);

switch(choice){
    case 1:
    printf("enter first number : ", num1);
scanf("%d", &num1);

printf("enter second number : ", num2);
scanf("%d", &num2);
    printf("answer : %d", num1 + num2);
    break;
    
    case 2:
    printf("enter first number : ", num1);
scanf("%d", &num1);

printf("enter second number : ", num2);
scanf("%d", &num2);
    printf("answer : %d", num1 - num2);
    break;

    case 3:
    printf("enter first number : ", num1);
scanf("%d", &num1);

printf("enter second number : ", num2);
scanf("%d", &num2);
    printf("answer : %d", num1 * num2);
    break;


    case 4:
    printf("enter first number : ", num1);
scanf("%d", &num1);

printf("enter second number : ", num2);
scanf("%d", &num2);
    printf("answer : %d", num1/num2);
    break;

    case 5: 
    
    printf("enter a number : ");
    scanf("%d", a);
    int fact = 1;
    for(int i = 1; i<=a; i++)
    {
        fact = fact*i;
        
    }
    printf("%d", fact);
    break;

}
}