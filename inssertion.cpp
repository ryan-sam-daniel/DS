#include<stdio.h>
void insertion(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
int main()
{
	int i,n,a[100];
	printf("no of elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion(a,n);
}
