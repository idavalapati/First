/*Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third 
argument is a minimum field width; the converted number must be padded with blanks on the 
left if necessary to make it wide enough.*/

#include<stdio.h>
#include<string.h>
void itoa(int n,char *s,int w);
int main()
{
	int n=1000,w=10;
	char s[100];
	itoa(n,s,w);
	printf("%s",s);
	return 0;
}

void itoa(int n,char *s,int w)
{
	int i=0,k,j,m;
	char t;
	do
	{
		s[i]=(n%10)+48;
		i++;
		n=n/10;
	}
	 while((n/10)>0);
	s[i]=(n%10)+48;
	s[i+1]='\0';
	printf("%s\n",s);
        int l=strlen(s);
        printf("length:%d\n",l);
        for(k=l;k<=w;k++)
        {
		s[k]=' ';
        }
	s[k]='\0';
	printf("%s",s);
	for(m=0,j=w;m<j;m++,j--)
	{
		t=s[m];
		s[m]=s[j];
		s[j]=t;
	}

	printf("%s",s);
}

