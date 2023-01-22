#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head;
void push(){
	int ele;
	printf("enter the value");
	scanf("%d",&ele);
	struct node*ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	printf("full");
	else
	{
		ptr->data=ele;
		ptr->next=head;
		head=ptr;
	}
}
void pop()
{
	struct node*ptr;
	if(head==NULL)
	printf("underflow");
	else{
		int temp=head->data;
		ptr=head;
		head=head->next;
		free(ptr);
	}
}
void disp()
{
	struct node*ptr;
	ptr=head;
	if(ptr==NULL)
	printf("Underflow");
	else{
		while(ptr!=NULL){
			printf("%d",ptr->data);
			ptr=ptr->next;
		}
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
				push();
				break;
			case 2:
				pop();
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
