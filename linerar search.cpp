#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j=0,a[100],ele,flag;
	printf("Enter no of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elememt to be searched : ");
	scanf("%d",&ele);
	while(j<=n)
	{
		if(a[j]==ele){
		printf("Element found at %d index",j);
		flag=0;
	}
		else 
		flag=1;
		j++;
	}
	if(flag==1)
	printf("Not found");
	
}
