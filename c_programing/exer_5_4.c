/*Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the 
end of the string s, and zero otherwise.*/

#include<stdio.h>
#include<string.h>

int mstrend(char *s,char *t)
{
	int l1,l2,i,x;
	l1=strlen(s);
	l2=strlen(t);
	printf("%d\n%d\n",l1,l2);
	char *y=strstr(s,t);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==*y)
			x=i;
	}
	printf("%d\n",x);
	if((x+l2)==l1)
		return 1;
	else
		return 0;
}
int main()
{
	char s[]="ballapple";
	char t[]="ball";
	int x=mstrend(s,t);
	if(x==1)
	{
		printf("occurs at end of string");
	}
	else
		printf("not find");
	return 0;
}

