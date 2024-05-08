/*Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in 
s1 that matches any character in the string s2. */

#include<stdio.h>
#include<string.h>
void squeeze (char s1[],char s2[]);
int main()
{
	char s1[]="hello @#$!World   !!";
	char s2[]="#@ woRLd !";
	squeeze(s1,s2);
	return 0;
}

void squeeze (char s1[],char s2[])
{
	int i,j,l1,l2,k;
	 printf("%s\n",s1);
	  printf("%s\n",s2);
	for(i=0;s2[i]!='\0';i++)
	{
		 for(j=0;s1[j]!='\0';j++)
		 {
			 if(s1[j]==s2[i]||s1[j]+65==s2[i]+97||s1[j]+97==s2[i]+65)
			 {
				 for(k=j;s1[k]!='\0';k++)
				 {
					 s1[k]=s1[k+1];
				 }
				 j=0;
			 }
		 }
	}
	printf("%s",s1);
}
