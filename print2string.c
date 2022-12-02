/******************Author : Arun Vittal*******************/
/****************** Date : 02/12/2022*********************/
/*********************Time 4.41pm*************************/


//Write a program to print a string taken input from user.

#include <stdio.h>
int main()
{
    char fname[30], lname[30];
    printf("Enter your first name :" ); //Taking input from user
    scanf("%s", fname);
    printf("Enter your last name :" );//Taking input from user
    scanf("%s", lname);
    printf("Your full name is %s %s\n", fname, lname);//printing the string   
    return 0;
}