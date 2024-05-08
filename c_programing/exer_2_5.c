/*Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. 
(The standard library function strpbrk does the same job but returns a pointer to the 
location.) */

#include<stdio.h>
#include<string.h>
int any(char s1[],char s2[]);
int main()
{
	char s1[]="hello";
	char s2[]="abc";
	int x=any(s1,s2);
	if(x==-1)
		printf("no character");
	else
	{
		printf("the first location in a string s1:%c\n",s1[x]);
		printf("%d\n",x);
	}
	return 0;
}

int any(char s1[],char s2[])
{
	int i,j,n,c=0;
	for(i=0;s2[i]!='\0';i++)
        {
                 for(j=0;s1[j]!='\0';j++)
                 {
                         if(s1[j]==s2[i])
			 {
				c++;
				 if(j<=n)
					n=j;
			 }
		 }
	}
	if(c==0)
		return -1;
	else
		return n;
}

