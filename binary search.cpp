#include<stdio.h>

int binsear(int array[],int element,int low,int high)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(array[mid]==element)
		return mid;
		if(array[mid]<element)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
}
int main()
{
	int n,a[100],ele;
	printf("Enter no of elements :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
	printf("Enter the elememt to be searched : ");
	scanf("%d",&ele);
	int res=binsear(a,ele,0,n-1);
	if(res==-1)
		printf("Not found");
	else 
		printf("%d",res);
	return 0;
}
