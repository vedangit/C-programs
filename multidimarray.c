#include<stdio.h>

/*storing temperatures of two cities in a week in a 2D array*/
const int CITY = 2;
const int WEEK = 7; 
int main()
{
    int temperature[CITY][WEEK]; //initialising the array
    int i, j;
    /*loop to input the temp of cities. for first city for first day input temp.*/
    for(i = 0; i<CITY; i++ ) 
        {
            for (j=0; j<WEEK; j++)
            {
                printf("city %d, day %d : ", i+1, j+1); //because for i and j initialised value is 0 and we dont want zero
                scanf("%d", &temperature[i][j]);
            }
        }
    printf("\n DISPLAYING TEMPERATURE \n \n ");


     for (int i = 0; i < CITY; ++i)
   {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
   }
    return 0;
}