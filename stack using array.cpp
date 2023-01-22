#include<stdio.h>
int a[100],n,top=-1,ele,ch;
void display()
{
	for(int i=0;i<top;i++)
	printf("%d",a[i]);
}
void push()
{
	if(top==n)
	printf("Stack Overflow");
	else
	{
	printf("Enter the element");
	scanf("%d",&ele);
	top=top+1;
	a[top]=ele;
	}
}
void del()
{
	if(top==-1)
	printf("stack underflow");
	else
	{
		printf("deleted element : %d",a[top]);
		a[--top];
	}
}
void peek()
{
	if(top==-1)
	printf("Stack underflow");
	else
	{
		printf("top ele : %d",a[top]);
		}	
}
int main()
{
	printf("Enter no of elements of the array :");
	scanf("%d",&n);
	int c=0;
	while(c==0){
	
	printf("\nChoice\n1.Insert\n2.Delete\n3.Peek\n4.Display\n");
	scanf("%d",&ch);
	switch(ch)
		{
			case 1:
			push();
			break;
			case 2:
			del();
			break;
			case 3:
			peek();
			break;
			case 4:
			display();
			break;
			default:
			printf("Invalid");
			break;	
		}}	
	return 0;	
}
