#include <stdio.h>
#include <stdlib.h>


int a[10];
int top = -1;
void pushtop(int x )
{
	top = top+1;
	a[top] = x;

}
void pop()
{
	top = top-1;
}
void printstack()
{
	int i;
	printf("the stack is : ");
	for(i=0;i<=top;i++)
	{
		printf("%d",a[i] );
	}
}
int main()
{ 
	int x;
	printf("enter your element to be added");
	scanf("%d",&x);
	pushtop(x);
	pushtop(x);
	pushtop(x);
	pop();
	printstack();


	return 0;
}