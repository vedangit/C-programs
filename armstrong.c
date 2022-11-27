/*if we divide the number by ten we gett the same number except the last digit try it bro its true*/
#include <stdio.h>
int main() {
    /*variable declaration*/
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    /*stored the original number in another variable so it is easier to compare in the end*/
    originalNum = num;

    while (originalNum != 0) {
       /*this will give the last digit of the number aka 3 in the case of 153 in the first loop*/
        remainder = originalNum % 10;
        printf("\n%d", remainder); //print statements just for clarity
        /*cube of the last digit will take place, subsequent squares will be added in result*/
       result += remainder * remainder * remainder;
       printf("\n%d", result);
       // removing last digit from the orignal number so that the cube of the next number can be taken
       originalNum /= 10;
       printf("\n%d", originalNum);
    }
/*comparing*/
    if (result == num)
        printf("\n%d is an Armstrong number.", num);
    else
        printf("\n%d is not an Armstrong number.", num);

    return 0;
}
