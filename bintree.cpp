#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
};
struct node*new_node(int x){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node*search(struct node*root,int x)
{
	if(root==NULL)
	return root;
	else if(x>root->data)
	return search(root->left,x);
	else
	return search(root->right,x);
}
struct node*insert(struct node*root,int x)
{
	if(root==NULL)
	return new_node(x);
	else if(x>root->data)
	root->right=insert(root->right,x);
	else
	root->left=insert(root->left,x);
	return root;
}
struct node*find_min(struct node*root){
	if(root==NULL)
	return NULL;
	else if(root->left!=NULL)
	return find_min(root->left);
	return root;
}
struct node*del(struct node*root,int x)
{
	if(root==NULL)
	return NULL;
	else if(x>root->data)
	root->right=del(root->right,x);
	else if(x<root->data)
	root->left=del(root->left,x);
	else{
		if(root->left ==NULL && root->right ==NULL)
		free(root);
		return NULL;
	}
	return root;
}
void inorder(struct node*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}
int main()
{
	struct node* root;
	root=new_node(20);
	insert(root,5);
	insert(root,1);
	insert(root,15);
	insert(root,9);
	insert(root,7);
	insert(root,12);
	insert(root,30);
	insert(root,25);
	insert(root,40);
	insert(root,45);
	insert(root,42);
	inorder(root);
	printf("\n");
	root=del(root,1);
	root=del(root,40);
	inorder(root);
	printf("\n");
	return 0;
}
