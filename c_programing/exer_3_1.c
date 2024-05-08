

#include<stdio.h>
 int binsearch(int x, int v[], int n);
int binary(int x,int a[],int n);
int main()
{
	int a[5]={11,12,13,14,15};
	int x=14,y;
	y=binary(x,a,5);
	//y=binsearch(x,a,5);
	if(y==-1)
		printf("no match");
	else
		printf("found:%d",y);
	return 0;
}
int binary(int x,int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
			return i;
	}
	return -1;
}

/*
found:3
real    0m0.002s
user    0m0.001s
sys     0m0.001s 
*/

 int binsearch(int x, int v[], int n)
 {
 int low, high, mid;
 low = 0;
 high = n - 1;
 while (low <= high) {
 mid = (low+high)/2;
 if (x < v[mid])
 high = mid + 1;
 else if (x > v[mid])
 low = mid + 1;
 else /* found match */
 return mid;
 }
 return -1; /* no match */
 }

/*
 
   found:3
real    0m0.002s
user    0m0.002s
sys     0m0.001s
*/
