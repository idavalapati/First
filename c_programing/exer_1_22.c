/*Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after 
the last non-blank character that occurs before the n-th column of input. Make sure your 
program does something intelligent with very long lines, and if there are no blanks or tabs 
before the specified column.*/

#include<stdio.h>

int main()
{
	int x=20,i;
	char c;
	for(i=0;(c=getchar())!=EOF;i++)
	{
		if(i>=20)
		{
			if(c==' ')
			{
				c='\n';
				putchar(c);
				i=0;
			}
		}
		putchar(c);
	}
	return 0;
}

