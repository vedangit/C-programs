#include<stdio.h>
int main()
{
    /*variable defining*/
    char c;
    int lower, upper;

    /*Input output variable*/
    printf("Enter an alphabet : ", c);
    scanf("%c", &c);

    /* the || basically means that if ANY ONE of these conditions is satisfied, the value returned will be true
       this entire statement is a logical operation assigned to a variable nothing else */
    lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    /*if else statement also uses the || operator*/
    if (lower || upper )
      printf("%c is a vowel", c);
    else
      printf("%c is a consonant", c);

    return 0;
}