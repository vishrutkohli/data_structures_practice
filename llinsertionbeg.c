#include <stdio.h>
#include <stdlib.h>

struct node {

int data;

struct node* next;

};

struct node* head ;//this is a global variable so that we can acces it in any function we make.

void insert(int x)
{
 struct node* temp = (struct node*)malloc(sizeof(struct node));
 temp->data = x;
 temp->next = head;
 head = temp;
}

void printlist()
{
struct node* temp = head;
 printf("the list is ");

while(temp != NULL)
{
printf("%d" , temp->data);
temp = temp->next;


}
printf("\n");



}




void main()
{
printf("enter the number of elemnts");
int n , i ,x ;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the  element");
scanf("%d",&x);
insert(x);
printlist();





}




}
