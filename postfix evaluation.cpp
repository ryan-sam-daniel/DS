#include<stdio.h>
#include<conio.h>
char a[50],ch;
int op1,op2,res,top=-1;
void push(int n)
{
	
	a[top++]=n;
}
int pop()
{
	int res=a[top];
	top--;
	return res;
}
int eval(char ch,int op1,int op2)
{
	switch(ch)
	{
		case '+':return (op1+op2);
		case '-':return (op1-op2);
		case '*':return (op1*op2);
		case '/':return (op1/op2);
	}
}
int main()
{
	
	printf("enter the expression");
	gets(a);
	for(int i=0;a[i]!=NULL;i++)
	{
		ch=a[i];
		if(ch>='0' && ch<='9')
		push('0');
		else{
			op2=pop();
			op1=pop();
			res=eval(ch,op1,op2);
			push(res);
		}
	}
	int x=pop();
	printf("%d",x);
	getch();
}
