#include<stdio.h>
int n,ch=0,ele,a[6],front=-1,rear=-1,i;
int enq(int ele){
	if(front==-1 && rear==-1){
	front=rear=0;
	a[rear]=ele;
}
	else if((rear+1)%6==front)
	printf("Overfloe");
	else{
	rear=(rear+1)%6;
	a[rear]=ele;	
}}
void deq()
{
	if(front==-1 && rear==-1)
	printf("Underflow");
	else if(front==rear)
	front=rear=-1;
	else{
	printf("%d\n",&a[front]);
	front=(front+1)%6;
}}
void dis()
{
	i=front;
	if(front==-1 && rear==-1)
	printf("Underflow");
	else
	while(i<=rear)
	{
		printf("%d",a[i]);
		i=(i+1)%6;
	}
}
int main()
{
	printf("Enter the no of elements :");
	scanf("%d",&n);
	while(ch!=4)
	{
		printf("\nChoice\n1.Enqueue\n2.Dequeue\n3.Display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element ");
				scanf("%d",&ele);
				enq(ele);
				break;
			case 2:
				deq();
				break;
			case 3:
				dis();
				break;
			default:
				printf("\nInvalid");
				break;
		}
	}
}
