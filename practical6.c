#include<stdio.h>


int main()

{

int m1, m2, m3, m4, m5;

float a;

printf("enter marks for the first subject : ");

scanf("%d", &m1);



printf("enter marks for the second subject : ");

scanf("%d", &m2);



printf("enter marks for the third subject : ");

scanf("%d", &m3);



printf("enter marks for the fourth subject : ");

scanf("%d", &m4);



printf("enter marks for the fifth subject : ");

scanf("%d", &m5);


if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)

{

printf("\nall subjects cleared\n");}

else{

printf("youve failed\n");}


a = (m1 +m2 + m3+ m4+ m5)/5;

printf("percent = %f\n\n", a);

printf("GRADE\n");

if (a >75)

{

printf("distinction");

}


if (a>=60 && a<75)

{

printf("first division");

}

else if (a >=50 && a<60)

{

printf("second division");

}

else if (a>=40 && a<50)

{

printf("third division");

}

printf("\n");

return 0;

}