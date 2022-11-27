#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //added this to use the strcpy fuction, still dont know why tho


struct Student{
    char name[50];               //made a struct
    char major[50];
    int age;
    double gpa;

};
/* want to take inputs for the name, age and gpa of the student belonging to the business major 
Hence, scanf is used for name age and gpa while strcpy is used for major to assign it the value "CSE" hope this makes sense babe xoxo"*/
int main(){
    struct Student student1;
    printf("Enter name : ", student1.name);
    scanf("%s", &student1.name);
    printf("Enter Age : ", student1.age);
    scanf("%d", &student1.age);
    printf("Enter Gpa : ", student1.gpa);
    scanf("%lf", &student1.gpa);
    
    strcpy(student1.major, "CSE");
    /*string copy fuction used to assign values to strings since strings are just an array of characters in c*/
    printf("\n -----------------><----------------- \n");
    printf("Name : " "%s", student1.name );
    printf( "\nAge : " "%d", student1.age);
    printf("\nGpa : " " %lf", student1.gpa);
    printf("\nMajor : " "%s", student1.major);
        return 0;

}