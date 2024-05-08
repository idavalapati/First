#include<stdio.h>
#include<stdio.h>
int solution_function(){
	unsigned short int n,c=0;
	scanf("%hu",&n);
		  while(n!=0)
        {
                c++;
                n&=n-1;
        }
		  return c;
}
int main()
{
	printf("%d",solution_function());
	return 0;
}

