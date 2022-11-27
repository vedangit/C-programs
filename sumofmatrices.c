#include<stdio.h>

int main()
{
    float a[2][2], b[2][2], result[2][2];
    for (int i = 0; i<2; ++i)
    {
        for (int j = 0; j<2; ++j)
        {
            printf("enter a%d%d : ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }

    for (int i = 0; i<2; ++i)
    {
        for (int j = 0; j<2; ++j)
        {
            printf("enter b%d%d : ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }

    for (int i = 0; i<2; ++i)
    {
        for (int j = 0; j<2; ++j)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("SUM OF MATRIX \n");

   for (int i = 0; i<2; ++i )
    {
        for (int j = 0; j<2; ++j)
        {
            printf("%f\t", a[i][j]);
            if (j==1)
            {
                printf("\n");
            }
        }
    }
    printf("\n\t   + \n\n");
   for (int i = 0; i<2; ++i )
    {
        for (int j = 0; j<2; ++j)
        {
            printf("%f\t", b[i][j]);
            if (j==1)
            {
                printf("\n");
            }
        }
    }
    printf("\n \t  = \n\n");
    for (int i = 0; i<2; ++i )
    {
        for (int j = 0; j<2; ++j)
        {
            printf("%f\t", result[i][j]);
            if (j==1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}