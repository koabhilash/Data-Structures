#include<stdio.h>
int main()
{
	int a[10],i,j,t,n;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t) //dack traversal
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}
