/*Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in 
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either 
case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange 
that a leading or trailing - is taken literally. */

#include<stdio.h>
void expand(char *s1,char *s2);
int main()
{
char s1[]="E-A5-2A-f#-*";
	char s2[1000];
	expand(s1,s2);
	printf("%s",s2);
	return 0;
}

void expand(char *s1,char *s2)
{
	int i,j,y,x,k=0,l=0,m;
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]=='-')&&(s1[i-1]>='a'||s1[i-1]>='0')&&(s1[i+1]<='z'||s1[i+1]<='9'))
		{
			x=s1[i-1];
			printf("%d\n",x);
			y=s1[i+1];
			printf("%d\n",y);
			printf("%d\n",k);
			k=x;
			for(j=l,m=0;k<y;m++)
			{
				if(s2[j-1]==(s2[j]=x+m))
				{
					continue;
				}
				s2[j]=x+m;
				j++;
				k=x+m;
			}
			l=j;
			//s2[j]='\0';
		}
	}
	s2[j]='\0';
}

