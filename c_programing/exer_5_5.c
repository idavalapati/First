/*Exercise 5-5. Write versions of the library functions strncpy, strncat, and strncmp, which 
operate on at most the first n characters of their argument strings. For example, 
strncpy(s,t,n) copies at most n characters of t to s. Full descriptions are in Appendix B. */

#include<stdio.h>
#include<string.h>
void mstrncpy(char *s, char *t,int n) 
 { 
	 int i;
 	for(i=0;i<n;i++)
		*s++ = *t++;
       *s++='\0';	
 }
void mstrncat(char *s,char *t,int n)
{
        int l=strlen(s);
        int i,j;
        char temp;
      //  printf("%d\n",l);
        //printf("%s\n",s);
        //printf("%s\n",t);
        for(i=0;i<n;i++)
        {
                //printf("%d\n",j);
                //printf("%c\n",s[j]=t[i]);
                s[i+l]=t[i];
        }
        //printf("%s",s);
        s[i+l]='\0';
        //printf("%s",s);
}
 int mstrncmp(char *s, char *t,int n)
 {
	 int i;
 for ( i=0; i<n && *s == *t; s++, t++,i++)
 if (*s == '\0')
 return 0;
 return *s - *t;
 }
int main()
{
	char s1[]="hello",s2[]="world",t[]="hello hi";
	int n=5;
	mstrncpy(s1,t,n);
	printf("%s\n",s1);
	mstrncat(s2,t,n);
	printf("%s\n",s2);
	int x=mstrncmp(s2,t,n);
	if(x==0)
		printf("same");
	else if(x>0)
		printf("s2 is big");
	else
		printf("t is big");
	return 0;
}
