/******************Author : Arun Vittal*******************/
/****************** Date : 02/12/2022*********************/
/*********************Time 4.41pm*************************/


//Write a program to print a string taken input from user.

#include <stdio.h>
int main()
{
    char firstname[30], lastname[30];
    printf("Enter your first name :" ); //Taking input from user
    scanf("%s", firstname);
    printf("Enter your last name :" );//Taking input from user
    scanf("%s", lastname);
    printf("Your full name is %s %s\n", firstname, lastname);//printing the string   
    return 0;
}