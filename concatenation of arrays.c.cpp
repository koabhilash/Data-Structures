#include<stdio.h>
int main()
{
	int a[50],b[50],c[100],m,n,i,j;
	printf("enter size of 1st array");
	scanf("%d",&m);
	printf("enter size of 2nd array");
	scanf("%d",&n);
	printf("enter %d first array elements\n",m);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("enter %d second array elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<m;i++)
	{
	c[i]=a[i];
    }
	j=i;
	for(i=0;i<n;i++)
	{
		c[j]=b[i];
		j++;
	}
		for(i=0;i<m+n;i++)
		printf("%3d",c[i]);
	return 0;
}
