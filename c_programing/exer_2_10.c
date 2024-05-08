/*Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case, 
with a conditional expression instead of if-else.*/

#include<stdio.h>
void lower(char *c);
int main()
{
	char c[]="HeLL WorLd!";
	lower(c);
	printf("lower:%s",c);
	return 0;
}
void lower(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		 (s[i]>='A' && s[i]<='Z') ? (s[i]=s[i]+32):s[i];
	}
	//printf("%s",s);
}
