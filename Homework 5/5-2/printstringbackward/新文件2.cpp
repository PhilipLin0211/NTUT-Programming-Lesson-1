#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revstr(char *str1) 
{
	int i, len, temp;
	len = strlen(str1);

	for (i = 0; i < len / 2; i++)
	{
		temp = str1[i]; 
		str1[i] = str1[len - i - 1]; 
		str1[len - i - 1] = temp; 
	} 
} 

int main() 
{ 
	char str[50] = {"HELLO"};
	
	/*printf("Enter a string you want to reverse: ");
	for (int i = 0; i < 50; i++)
	{
		scanf("%c", &str[i]);
	}*/
	
	printf ("Before reversing the string\t: %s \n", str); 

	revstr(str); 
	printf ("After reversing the string\t: %s", str); 
}
	
