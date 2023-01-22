#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*front;
struct node*rear;
void enq()
{
	struct node*ptr;
	int ele;
	printf("enter the value");
	scanf("%d",&ele);
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	printf("overflow");
	else
	ptr->data=ele;
	if(front==NULL){
		front=ptr;
		rear=ptr;
		front->next=NULL;
		rear->next=NULL;
	}
	else{
		rear->next=ptr;
		rear=ptr;
		rear->next=NULL;
	}
}
void deq()
{
	struct node*ptr;
	if(ptr==NULL){
		printf("underflow");
	}
	else{
		ptr=front;
		front=front->next;
		free(ptr);
	}
}
void disp()
{
	struct node*ptr;
	ptr=front;
	if(front==NULL)
	printf("Empty");
	else
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	int ch=0;
	while(ch!=4){
		printf("\nchoice\n1.push\n2.pop\n3.Display");
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
				disp();
				break;
			default:
				printf("Invalid");
				break;
		}
	}
}
