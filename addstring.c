/******************Author : Arun Vittal*******************/
/****************** Date : 02/12/2022*********************/
/*********************Time 5.29pm*************************/

// Write a c program to print add two strings.

#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Arun", string2[] = "Vittal";
    printf("Enter first string : ");
    scanf("%s", string1);
    printf("Enter second string : ");
    scanf("%s", string2);
    printf("Addition of two strings is : %s\n", strcat(string1, string2));
}