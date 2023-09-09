#include <stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node *next;
	};
	struct node *h,*nn,*t,*p;
	
	void ibegin()
	{ 
	nn=(struct node*)malloc(sizeof(struct node));
		printf("enter data ");
		scanf("%d",&nn->data);
		nn->next=h;
		h=nn;
	}
	void imid()
	{
		nn=(struct node*)malloc(sizeof(struct node));
		printf("enter data ");
		scanf("%d",&nn->data);
		int i=1,pos;
		printf("\nenter insert position ");
		scanf("%d",&pos);
		t=h;
		while(i<pos && t!=0)
		{
		t=t->next;
		i++;
	    }
		nn->next=t->next;
		t->next=nn;
	}
	
	void iend()
	{
		nn=(struct node*)malloc(sizeof(struct node));
		printf("enter data ");
		scanf("%d",&nn->data);	
		nn->next=0;
		t=h;
		while(t->next!=0)
		{
			t=t->next;
		}
		t->next=nn;
	}

	
	void ins()
{
	int a;
	do
	{
	
	printf("\nenter insersion type: 1-b 2-m 3-e\n");
	scanf("%d",&a);
	switch(a)
	{
		
		case 1: ibegin();
		break;
		case 2: imid();
		break;
		case 3: iend();
		break;
		default: printf("invalid choice");
	}
   }
   while(a!=0);
}
	
	void dbegin()
  {
  	t=h;
  	h=t->next;
  	t->next=0;
  	free(t);
  }
  void dmid()
  {
  	int pos,i=1;
  printf("\nenter insert position ");
		scanf("%d",&pos);
		t=h;
		while(i<pos && t!=0)
		{
		t=t->next;
		i++;
	    }
		while(p->next!=t)
		p=p->next;
		p->next=t->next;
		t->next=0;
		free(t);
  }
  void dend()
  {
  	while(t->next!=0)
		{
			t=t->next;
		}
		while(p->next!=t)
		p=p->next;
		p->next=0;
		free(t);
  }
  void del()
  {
  	int b;
	do
	{
	
	printf("\nenter delete type: 1-b 2-m 3-e\n");
	scanf("%d",&b);
	switch(b)
	{
		
		case 1: dbegin();
		break;
		case 2: dmid();
		break;
		case 3: dend();
		break;
		default: printf("invalid choice");
	}
   }
   while(b!=0);
  } 
  
  
	void display()
	{
		t=h;
		while(t!=0)
		{
			printf("%3d",t->data);
			t=t->next;
		}
	}
int main()
{
	h=0;
	int c=1;
	while(c==1)
	{
		nn=(struct node*)malloc(sizeof(struct node));
		printf("enter data ");
		scanf("%d",&nn->data);
		nn->next=0;
		if(h==0)
		{
			h=t=nn;
		}
		else
		{
			t->next=nn;
			t=nn;
		}
	     printf("enter 1-continue 0-stop");
	     scanf("%d",&c);
	}
	t=h;
	printf("list elements are\n");
	while(t!=0)
	{
		printf("%3d",t->data);
		t=t->next;
		
	}
	int x;
	do
	{
	
	printf("\nenter  type: 1-insert 2-delete 3-display\n");
	scanf("%d",&x);
	switch(x)
	{
		
		case 1: ins();
		break;
		case 2: del();
		break;
		case 3: display();
		break;
		default: printf("invalid choice");
	}
   }
   while(x!=0);
	return 0;
}
