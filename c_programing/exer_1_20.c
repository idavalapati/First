#include<stdio.h>

#define LIMIT 20
int main()
{
	int count;
	char s=' ',c;
	for(count=0;(c=getchar())!=EOF;count++)
	{
		if((count<=LIMIT)&&(c=='\t'))
			putchar(s);
		else
			putchar(c);
	}
	return 0;
}
	
