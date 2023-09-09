#include<stdio.h>
int main()
{
	int a[10],i,j,t,n;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)  //no of passes
	{
		for(j=0;j<=n-1-i;j++) //no of comparisions
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	
	}
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}
