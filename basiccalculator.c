#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1;
int num2;

/*Getting user input*/

printf("enter first number : ", num1);
scanf("%d", &num1);

printf("enter second number : ", num2);
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



return 0;

}

