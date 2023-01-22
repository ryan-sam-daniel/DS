#include<stdio.h>
int n,ch=0,front=-1,rear=-1,ele,a[100];
void enq()
{
	printf("Enter the element : ");
	scanf("%d",&ele);
	if(rear==n-1){
		printf("Stack overflow");
	}
	else
	{
	if(front==-1 && rear==-1)
	front=rear=0;
	else 
	rear++;
	a[rear]=ele;
}}
void deq()
{
	if(front==-1 && rear==-1)
	printf("Underflow");
	else
	{
		printf("%d",a[front]);
		front=front+1;
	}
}
void dis()
{
	for(int i=front;i<=rear;i++)
	printf("%d\n",a[i]);
}
int main()
{
	printf("Enter the elements of queue : ");
	scanf("%d",&n);
	while(ch!=4)
	{
		printf("\nChoice\n1.Enqueue\n2.Dequeue\n3.Display");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			enq();
			break;
			case 2:
			deq();
			break;
			case 3:
			dis();
			break;
			default:
			printf("not valid");
			break;
		}
	}
	return 0;
}
