#include<stdio.h>
int addition();
int saddlepoint();
int main()
{
    int a[2][2], b[2][2], s;
    s = saddlepoint();
    printf("%d", s);
    return 0;
}

/*addition of two matrices*/
int addition()
{
    int arr1[2][2], arr2[2][2], result[2][2];

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("enter arr%d%d", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("enter arr%d%d", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("%d\n", result[i][j]);
            
        }
    }
}

int saddlepoint()
{
    int arr[10][10];
    /*input for order of matrix*/
    int m, n;
    printf("enter order of matrix : ");
    scanf("%d%d", &m, &n);

    /*input for matrix*/
    for(int i= 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("enter element%d%d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    /*min element of row*/

    for(int i=0; i<n; i++)
    {
        int p = 0;
        int min = arr[i][0];
        for(int j= 0; j<n; j++)
        {
            if(min>arr[i][j])
            {
                p = j;
                min = arr[i][j];
            }
        }
        int l = 0;
        for(int j = 0; j<n; j++)
        {
            if(l<arr[j][p])
            {
                l = arr[j][p];
            }

            if (l==min)
            {
                printf("\nsaddle point is : %d\n", min);
            }
        }
        
    }
    

}