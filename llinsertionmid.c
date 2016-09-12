#include <stdio.h>
#include <stdlib.h>


int* p;
struct node {

int data;

struct node* next;

};

struct node* head ;//this is a global variable so that we can acces it in any function we make.

void insertmid(int x)
{ int i , j=0;
 struct node* temp ;
 struct node* save = head;
 struct node* added = (struct node*)malloc(sizeof(struct node));
 added->data = x;
 
 
 for(i=0;i<*p-2;i++)
 {  
    save = save->next;

 }
 added ->next = save->next;
 save->next = added;
 printf("the checking is %d",head->data);
 

}
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
int n , i ,x ,  m , y ;

scanf("%d",&n);


for(i=0;i<n;i++)
{
printf("enter the  element");
scanf("%d",&x);
insert(x);
printlist();




}



printf("enter the position where new node should be added ");
scanf("%d",&m);
p= &m;
printf("enter the  element");
scanf("%d",&y);
insertmid(y);

printlist();



}
