/******************Author : Arun Vittal*******************/
/****************** Date : 02/12/2022*********************/
/*********************Time 5.29pm*************************/

// Write a c program to add two strings without using string library function.

#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,l1,l2;
    char string1[100], string2[100];
    printf("Enter first string : ");
    scanf("%s", string1);
    printf("Enter second string : ");
    scanf("%s", string2);
    l1=strlen(string1);
    l2=strlen(string2);
    for ( i = 0; i<=l2; i++)
    {
        string1[l1+i]=string2[i];
    }
    

    printf("After concatination of two strings the result is : %s\n", string1);
}