#include<stdio.h>
int q[5],f=-1,r=-1,n=5;
void enqueue()
{
	int x;
	printf("enter enqueue value");
	scanf("%d",&x);
	if(r>=n-1)
	printf("queue is full");
	else if(f==-1 &&r==-1)
	{
		f++;
		r++;
		q[r]=x;
	}
	else
	{
		r++;
		q[r]=x;
	}
}
void dequeue()
{
	if(r==-1 &&f==-1)
	printf("queue is empty to dequeue");
	else if(f==r)
	f=r=-1;
	else
	{
		printf("dequeued element is %d",q[f]);
		f++;
	}
}
void display()
{
	int i;
	for(i=f;i<=r;i++)
	printf("%3d",q[i]);
}
int main()
 {
 	int choice;
 	do
 	{
 		printf("\nenter choice:\n 1-enque  2-deque   3-display \n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1: enqueue();
 			break;
 			case 2: dequeue();
 			break;
 			case 3: display();
 			break;
 			default: printf("invalid choice");
		 }
	 }
	 while (choice!=0);
 }
