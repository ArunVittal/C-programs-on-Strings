#include <stdio.h>
#include <string.h>
int main()
{
	char string1[100], string2[100], string3[100];
	printf("Enter the first string : ");
	scanf("%s", string1);
	printf("Enter the second string : ");
	scanf("%s", string2);
	strcat(string1, string2);
	strcpy(string3,string1);
	printf("Addition of two string is : %s \n", string3);
	return 0;
}
