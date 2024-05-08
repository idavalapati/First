/*Exercise 4-12. Adapt the ideas of printd to write a recursive version of itoa; that is, convert 
an integer into a string by calling a recursive routine.*/

#include<stdio.h>
int i=0;
char s[10];
void itoa(int n);
int main()
{
	int n=-1345678;
	if(n>=0)
	{
	itoa(n);
	printf("%s",s);
	}
	else{
		itoa(-(n));
	//	printf("%s",s);
			
}
	return 0;
}

void itoa(int n)
{
// int i=0;
  //      static char s[10];
	if (n / 10)
	{
//		s[i++]=n%10+'0';
		//printf("%d\n",n/10);
		itoa(n / 10);
	//	s[i++]=n%10+'0';
		//printf("%d\n",n/10);
	}
//	printf("%c\n",n % 10 + '0'); 
	s[i++]=n%10+'0';
//	i++;
//	s[i]='\0';
//	printf("%s",s);

}
