/*Exercise 4-4. Given the basic framework, it's straightforward to extend the calculator. Add 
the modulus (%) operator and provisions for negative numbers. */
#include<math.h>
#include <stdio.h>
#include <stdlib.h> /* for atof() */
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
#define MAXVAL 100 /* maximum depth of val stack */
#include <ctype.h>
#define BUFSIZE 100
char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */ 
int getch(void);
void ungetch(int); 
int sp = 0; /* next free stack position */
double val[MAXVAL],temp; /* value stack */
int getop(char []);
void push(double);
double pop(void);
/* reverse Polish calculator */
int main()
{
	int type;
	double op2,op3;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				//op3 = pop();
				if (op2 != 0.0)
					push((int)pop() % (int)op2);
				else
					printf("error: zero divisor\n");
				break;
			case '\n':
				 printf("\t%.8g\n",val[sp-1]);
				printf("\t%.8g\n", val[sp-2]);
				temp=val[sp-1];
				val[sp-1]=val[sp-2];
				val[sp-2]=temp;
				printf("after swap:\n");
				printf("\t%.8g\n",val[sp-1]);
                                printf("\t%.8g\n", val[sp-2]);
				push(val[sp-1]);
				printf("after duplicate:\n");
				 printf("\t%.8g\n",val[sp-1]);
                                printf("\t%.8g\n", val[sp-2]);
				 printf("clear stack:\n");
				while(sp>0)
				{
					printf("\t%.8g\n",pop());
				}

				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}

/* push: push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}
/* pop: pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; /* not a number */
	i = 0;
	if (isdigit(c)) /* collect integer part */
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.') /* collect fraction part */
			while (isdigit(s[++i] = c = getch()))
				;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}

int getch(void) /* get a (possibly pushed-back) character */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c) /* push character back on input */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
