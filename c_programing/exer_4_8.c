#include <stdio.h>

char buf = 0;

/* getch: get a (possibly) pushed back character */
int getch(void)
{
    int c;

    if(buf != 0)
        c = buf;
    else
        c = getchar();

    buf = 0;
    return c;
}

/* ungetch: push a character back into input */
void ungetch(int c)
{
    if(buf != 0)
        printf("ungetch: too many characters\n");
    else
        buf = c;
}

int main(void)
{
    int c,x;

    c = '*';

    ungetch(c);

    while((c=getch()) != EOF)
    {
	    if(c=='*'||c=='\n'){
	     //putchar(c);
	     x=0;
	  }
	    else if(x==0){
		    putchar(c);
		    putchar('\n');
		    x=1;
	    }
	    
	//	ungetch('\n');
    }

    return 0;
}
