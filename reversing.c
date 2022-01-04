#include <stdio.h>
#include <string.h>
int reverseString(char* str)
{
	int l, i;
	char *begin, *end, ch;


	l = strlen(str);

	
	begin = str;
	end = str;

	
	for (i = 0; i < l - 1; i++)
	{
		end++;
		
	}
	
	for (i = 0; i < l / 2; i++) 
	{

		
		ch = *end;
		*end = *begin;
		*begin = ch;

		
		begin++;
		end--;
		
	}
}


int main()
{

	
	char str[100];
	printf("Enter a string: \n");
	scanf("%s",str);


	reverseString(str);

	
	printf("Reverse of the string: %s \n", str);
	return 0;
}


/*#include<stdio.h>
int main()
{
 char str[100];
 len=strlen();
 printf ("enter the str:",str);
 scanf("%s",str)
 reverseStr(str);
*/



































