/*Exercise 4-14. Define a macro swap(t,x,y) that interchanges two arguments of type t. 
(Block structure will help.)*/

#include<stdio.h>
#define swap(t,x,y) {t z;z=x;x=y;y=z;}

int main()
{
	int x=6,y=7;
	 printf("befoer:x=%d y=%d",x,y);
	swap(int,x,y);
	printf("after:x=%d y=%d",x,y);
	return 0;
}
