/*Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a 
hexadecimal integer in s. */

#include<stdio.h>
#include<string.h>

void itob(int n,char *s,int b);
int main()
{
	int n=23,b=-7;
	char s[100];
	if(b<0)
		printf("enter valid number");
	else{
	itob(n,s,b);
	printf("%s",s);
	}
	return 0;
}

void itob(int n,char *s,int b)
{
	int i=0,r,k,j;
	while(n>=b)
	{
		r=n%b;
		n=n/b;
		if(r<=9)
		{
			s[i]=r+48;
			i++;
		}
		else
		{
			s[i]=r+55;
			i++;
		}
	}
	if(n<=9)
	{
		s[i]=n+48;
		i++;
	}
	else
	{
		s[i]=n+55;
		i++;
	}
	s[i]='\0';
	int l=strlen(s);
	printf("length:%d\n",l);
	for(k=0,j=l-1;k<j;k++,j--)
	{
		char temp;
		temp=s[k];
		s[k]=s[j];
		s[j]=temp;
	}
	//strrev(s);
	//printf("%s",s);
}

