/******************Author : Arun Vittal*******************/
/****************** Date : 03/12/2022*********************/
/*********************Time 2.12pm*************************/

// Write a c program to find the length of the string take input from user.

#include <stdio.h>
#include <string.h>
int main()
{
    int l;                                               // Declaring variable
    char name[100];
    printf("Enter any string : ");                       //Taking input from user
    scanf("%s", name);                          
    l = strlen(name);                                    // Using string function
    printf("length of the string %s is %d \n", name, l); // Printing the length of string
    return 0;
}