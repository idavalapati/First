/*Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated 
to the right by n positions.*/

#include<stdio.h>
int rightrot(int x,int n);
int main()
{
	int x=15,n=-3;
	printf("%d",rightrot(x,n));
	return 0;
}

int rightrot(int x,int n)
{
//	int r;
//	r=x<<(4-n);
	x=x>>n;
//	x=x|r;
	return x;
}
