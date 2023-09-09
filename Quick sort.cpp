#include<stdio.h>
int a,ub,lb;
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	
}

 int partition(int a[],int lb,int ub)
{
	int pivot;
	int s,e;
	pivot=a[lb];
	s=lb;
	e=ub;
	while(s<e)
	{
	while(a[s]<=pivot)
	{
	s++;
    }
	while(a[e]>pivot)
	{
	e--;
    }
	if(s<e)
	{
		swap(&a[s],&a[e]);
	}
   }
   swap(&a[lb],&a[e]);
	return e;
}

void quicksort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int l=partition(a,lb,ub);
		quicksort(a,lb,l-1);
		quicksort(a,l+1,ub);
	}
}
int main()
{
	int i, a[50],n,lb,ub;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	lb=0,ub=n-1;
	quicksort(a,lb,ub);
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	
}
