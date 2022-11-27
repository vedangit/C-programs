#include <stdio.h>
#include <stdlib.h>
#include <string.h>  


struct Student{
    char name[50];               
    char major[50];
    int age;
    double gpa;

};
/* want to take inputs for the name, age and gpa of the student belonging to the business major 
Hence, scanf is used for name age and gpa while strcpy is used for major to assign it the value "CSE" hope this makes sense babe xoxo"*/
int main()
{
    int i, a;
    struct Student student1[10];
    printf("Enter the number of records to be added : ");
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        printf("\nEnter name : ");
    scanf("%s", &student1[i].name);
    printf("\nEnter Age : " );
    scanf("%d", &student1[i].age);
    printf("\nEnter Gpa : ");
    scanf("%lf", &student1[i].gpa);
    }
    

    printf("\n -----------------RESULTS----------------- \n");
    for(i=0; i<=a; i++)
    {
    printf("\nName : " "%s", student1[i].name );
    printf( "\nAge : " "%d", student1[i].age);
    printf("\nGpa : " " %lf", student1[i].gpa);
    
    }
    return 0;

}