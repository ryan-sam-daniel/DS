#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
int ch=0;
struct node*head;
void BegIns()
{
	int ele;
	struct node*ptr;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	printf("overflow");
	else
		printf("Enter the element");
		scanf("%d",&ele);
		ptr->data=ele;
		ptr->next=head;
		head=ptr;
}
void lasIns(){
	int ele;
	struct node*ptr,*temp;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	printf("overflow");
	else
		printf("Enter the data");
		scanf("%d",&ele);
		ptr->data=ele;
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=ptr;
		ptr->next=NULL;
}
void RanIns(){
	int ele,loc;
	struct node*ptr,*temp;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	printf("overflow");
	else
	
	printf("Enter the data");
	scanf("%d",&ele);
	ptr->data=ele;
	printf("Enter the location :");
	scanf("%d",&loc);
	temp=head;
	for(int i=0;i<loc;i++)
	{
		temp=temp->next;	
	}
	ptr->next=temp->next;
	temp->next=ptr;
}
void Begdel(){
	struct node*ptr;
	if(head==NULL)
	printf("Lsit empty\n");
	else
	ptr=head;
	head=ptr->next;
	free(ptr);
}
void lasDel()
{
	struct node*ptr,*ptr1;
	if(head==NULL)
	printf("Lsit empty\n");
	else
	ptr=head;
	while(ptr->next!=NULL){
		ptr1=ptr;
		ptr=ptr->next;
	}
	ptr1->next=NULL;
	free(ptr);
}
void RanDel(){
	int loc;
	struct node*ptr,*ptr1;
	if(head==NULL)
	printf("Lsit empty\n");
	else
	printf("Enter the Location :");
	scanf("%d",&loc);
	for(int i=0;i<loc;i++){
		ptr1=ptr;
		ptr=ptr->next;
	}
	ptr1->next=ptr->next;
	free(ptr);
}
void search()
{
	struct node*ptr;
	int ele,flag,i=0;
	ptr=head;
	printf("Enter the element :");
	scanf("%d",&ele);
	while(ptr!=NULL)
	{
		if(ptr->data==ele)
		{
			printf("%d",i+1);
			flag=0;
		}
		else 
		flag=1;
		i++;
		ptr=ptr->next;
	}
	if(flag==1)
	printf("Element not found");
}
void dis()
{
	struct node*ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	while(ch!=9){
	printf("\nChoice\n1.BeginInsert\n2.LastInsert\n3.RandomInsert\n4.BeginDelete\n5.LastDelete\n6.RandomDelete\n7.Search\n8.Display\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			BegIns();
			break;
		case 2:
			lasIns();
			break;
		case 3:
			RanIns();
			break;
		case 4:
			BegIns();
			break;
		case 5:
			lasIns();
			break;
		case 6:
			RanIns();
			break;
		case 7:
			search();
			break;
		case 8:
			dis();
			break;
		default:
			printf("Invalid");
			break;		
	}
}
}
