#include<stdio.h>

int addnum(int a, int b);
void checkPrimeNumber();
void vowel();
int fun();

int main()
{
    int n1, n2;
    printf("enter 1 : ");
    scanf("%d", &n1);
    printf("enter 2 : ");
    scanf("%d", &n2);

    addnum(n1, n2);
    checkPrimeNumber(); 
    fun();
    vowel();
    return 0;

}
  int addnum(int a, int b)
  {
    int result;

    result = a +b;
    printf("%d", result);
    return 0;
  }

  void checkPrimeNumber() {
  int n, i, flag = 0;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);
}

int fun()
{
char ch;
printf ( "\nEnter any alphabet : " );
scanf ( "%c", &ch );
if ( ch >= 65 && ch <= 90 )
  printf(ch);
else
  printf(ch + 32);
}

void vowel()
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
}