#include<stdio.h>
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void selec(int a[],int n)
{
	int i,min,j;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])
			min=j;
		}
		swap(&a[min],&a[i]);
		}
}
int main()
{
	int a[]={64,25,12,22,11};
	int n=5;
	selec(a,n);
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
}
