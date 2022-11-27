/*square root, square, cube, prime, factorial, prime factors*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n, choice, root;
    printf("\nChoose an option\n 1. Square root\n 2. Square\n 3. Cube\n 4. Check for prime\n 5. Factorial\n 6. Prime factors\n");
    scanf("%d", &choice);
    printf("Enter a number : ");
    scanf("%d", &n);
    

    switch(choice)
    {
        case 1:
        printf("square root = %f", sqrt(n));
        break;

        case 2:
        printf("square = %d", n*n);
        break;
        

    }
    return 0;
}