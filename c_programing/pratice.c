#include<stdio.h>

#define BUFSIZE 100

int getch(void);

void ungetch(int c);

int buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0;     /* next free position in buf */

int main(void) {
    int c;

    c = '*';

    ungetch(c);

    while ((c = getch()) != EOF)
        putchar(c);
	printf("EOF end of file");
    return 0;
}

/* getch: get a (possibly pushed back) character */

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

/* ungetch: push a character back onto the input */

void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters \n");
    else
        buf[bufp++] = c;
}
	
