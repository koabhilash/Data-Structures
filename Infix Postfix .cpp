#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[50],in[50],post[50];
int t=-1;
void push(char);
char pop();
int empty();
void topost();
void print();
int pre(char);

int main()
{
	printf("enter infix expression\n");
	gets(in);
	topost();
	print();
	return 0;
}
void topost()
{

	int i,j=0;
	char sym,nxt;
	for(i=0;i<strlen(in);i++)
	{
		sym=in[i];
		switch(sym)
		{
			case '(':
				push(sym);
				break;
			case ')':
			while((nxt=pop())!='(')
			post[j++]=nxt;
			break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			while(!empty() && pre(s[t])>=pre(sym))
			post[j++]=pop();
			push(sym);
			break;
			default:
			post[j++]=sym;	
		}
	}
	while(!empty())
	post[j++]=pop();
	post[j++]='\0';
}

int pre(char sym)
{
	switch(sym)
	{
			case '+':
			case '-':
				return 1;
			case '*':
			case '/':
				return 2;
			case '^':
				return 3;
			case '%':
				return 4;
				
			default: 
			return 0;	
	}
}
void print()
{
	int i=0;
	printf("postfix expression is\n");
	while(post[i])
	{
		printf("%c",post[i++]);
	}
	printf("\n");
}
void push(char c)
{
	if(t>=50-1)
	printf("stack is full\n");
	else
	{
		t++;
		s[t]=c;
	}
}
char pop()
{
	int c;
	if(t==-1)
	{
	printf("stack empty");
	
    }
	else
	{
		c=s[t];
		t--;
		return c;
	}
}
int empty()
{
	if(t==-1)
	return 1;
	else
	return 0;
}




