/*Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2: 
strcat(s,t) copies the string t to the end of s.*/

#include<stdio.h>
#include<string.h>
void mstrcat(char *s,char *t)
{
	int l=strlen(s);
	int i,j;
	char temp;
	printf("%d\n",l);
	printf("%s\n",s);
	printf("%s\n",t);
	for(i=0;t[i]!='\0';i++)
	{
		//printf("%d\n",j);
		//printf("%c\n",s[j]=t[i]);
		s[i+l]=t[i];
	}
	//printf("%s",s);
	s[i+l]='\0';
	//printf("%s",s);
}
int main()
{
	char s[100]="hello*";
	char t[100]="world!";
	mstrcat(s,t);
	printf("%s",s);
	return 0;
}
