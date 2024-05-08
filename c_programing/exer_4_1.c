/*Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none. */

#include<stdio.h>
int strindex(char s[], char t[]);
int main()
{
	int i;
	char s[100]="Hello Hello Hello";
	char t[100]="LLO";
	printf("%s\n",s);
	for(i=0;s[i]!='\0'||t[i]!='\0';i++)
	{
		 //printf("%c\n",s[i]);
		 if(t[i]>='A'&& t[i]<='Z')
                {
                        t[i]=t[i]+32;
                }
		 else if(s[i]>='A'&& s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
			printf("%c\n",s[i]);
	}
	printf("%s",s);
	int x=strindex(s,t);
	if(x==-1)
		printf("no match");
	else
		printf("position:%d",x+1);
	return 0;
}

int strindex(char s[], char t[])
 {
 int i, j, k,x=-1;
 for (i = 0; s[i] != '\0'; i++) 
 {
	 for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);
 	 if (k > 0 && t[k] == '\0')
	 {
		 if(i>x)
		  x=i;
	 }
 }
 return x;
 }


