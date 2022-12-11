/*Write a program that will ask the user to input two strings and displays the length of two strings when they are concatenated.*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100], s2[100];
	
	printf("Enter the first string\n");
	gets(s1);
	printf("Enter the second string\n");
	gets(s2);
	strcat(s1,s2);
	printf("Length of string: %d", strlen(s1));
	
	return 0;
}
