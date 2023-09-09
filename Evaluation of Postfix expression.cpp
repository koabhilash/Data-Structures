#include<stdio.h>
#include<string.h>
#include<ctype.h>
char post[50];
float s[50];
int t=-1;
void push(float c)
{
	t++;
	s[t]=c;
}
float pop()
{
	float x;
	x=s[t];
	t--;
	return x;
}
int main()
{
	float v1,v2;
	int i;
	printf("enter postfix expression\n");
	scanf("%s",&post);
	for(i=0;post[i]!='\0';i++)
	{
		if(isdigit(post[i]))
		{
			push(post[i]-'0');
		}
		else
		{
			v1=pop();
			v2=pop();
			switch(post[i])
			{
				case '+':
					push(v2+v1);
					break;
				case '-':
					push(v2-v1);
					break;
				case '*':
					push(v2*v1);
					break;		
				case '/':
					push((float)v2/v1);
					break;	
					
			}
		}
	}
	printf("result=%f\n",s[t]);
	return 0;
}

