/*Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits 
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.*/

#include<stdio.h>
#include<string.h>
#include <math.h>
int power(int b,int p);
int htoi(char s[]);
int main()
{
	int i,j;
	char s[10];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(!((s[0]=='0'&&s[1]=='x')||(s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='f')||(s[i]>='A'&&s[i]<='F')))
		{
			printf("enter correct number");
			return 0;
		}
	}
	if(s[0]=='0'&&s[1]=='x')
	{
		for(j=0,i=2;s[i]!='\0';i++,j++)
		{
			s[j]=s[i];
		}
		s[j]='\0';
	}
	int x=htoi(s);
	printf("integer:%d",x);
	return 0;
}
int htoi(char s[])
{
	int i,n=0,l;
	printf("%s\n",s);
	l=strlen(s);
	printf("%d\n",l);
	for(i=0;(s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='f')||(s[i]>='A'&&s[i]<='F');i++)
	{

			if(s[i]>='0'&&s[i]<='9')
				n=(s[i]-48)*(power(16,l-1-i))+n;
			if(s[i]>='a'&&s[i]<='f')
                        	n=(s[i]-87)*(power(16,l-i-1))+n;
			if(s[i]>='A'&&s[i]<='F')
                        	n=(s[i]-55)*(power(16,l-i-1))+n;
	}	
	return n;
}

int power(int b,int p)
{
	int n=1,i;
	for(i=0;i<p;i++)
	{
		n=b*n;
	}
	return n;
}
