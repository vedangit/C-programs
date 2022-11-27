#include <stdio.h>
#include<stdlib.h>
void main()
{
int val;
printf("Enter a nummber : ");
scanf("%d", val);
if (val == 0 || val == 1)
printf("The square root is %d", val) ;

int counter = 1, sqroot=1, output;
while (sqroot <= val)
{
counter++;
sqroot = counter*counter;
}
output= counter - 1;
printf("The square root is %d", output) ;
}