/*Exercise 4-13. Write a recursive version of the function reverse(s), which reverses the 
string s in place*/

#include<stdio.h>
#include<string.h>
void mreverse(char *s);
int main()
{
	char s[100]="Hello World!";
	//printf("%s",s);
	mreverse(s);
	printf("%s",s);
	return 0;
}
void mreverse(char *s)
{
	int i,j,l;
	char temp;
	l=strlen(s);
	 //printf("%s",s);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
		
