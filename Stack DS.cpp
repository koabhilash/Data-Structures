#include<stdio.h>
#include<stdlib.h>
int s[10];
int t=-1,n=10;
void push()
{
	int x;
	printf("enter data");
	scanf("%d",&x);
	if(t>=n-1)
	{
		printf("stack is full\n");
	}
	else
	{
		t++;
		s[t]=x;
	}
}
void pop()
{
	int item;
	if(t==-1)
	printf("stack is empty to pop\n");
	else
	{
		item=s[t];
		t--;
	}
	printf("popped element is %2d\n",item);
}
void peek()
{
	if(t==-1)
	printf("stack is empty\n");
	else
		printf("peek element is %2d\n",s[t]);
}
 void display()
 {
 	int i;
 	for(i=t;i>=0;i--)
 	printf("%3d",s[i]);
 }
 int main()
 {
 	int choice;
 	do
 	{
 		printf("\nenter choice:\n 1-push  2-pop  3-peek  4-display \n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1: push();
 			break;
 			case 2: pop();
 			break;
 			case 3: peek();
 			break;
 			case 4: display();
 			break;
 			default: printf("invalid choice");
		 }
	 }
	 while (choice!=0);
 }
