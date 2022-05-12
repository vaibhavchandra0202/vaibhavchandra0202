#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
};
struct node*top = NULL;
void push(int value)
{
 struct node *newnode;
 newnode = (struct node
*)malloc(sizeof(struct node));
 newnode->data= value;
 if (top == NULL)
 {
 newnode->next = NULL;
 }
 else
 {
 newnode->next = top;
 }
 top = newnode;
 printf("node is inserted\n\n");
}
int pop()
{
 if (top == NULL)
 {
 printf("\nstack underflow\n");
 }
 else
 {
 struct node *temp = top;
 int temp_dara = top->data;
 top =top->next;
 free(temp);
 }
}
void display()
{
 if (top == NULL)
 {
 printf("\nstack underflow\n");
 }
 else
 {
 printf("the stack is \n");
 struct node *temp = top;
 while (temp->next !=NULL)
 {
 printf("%d--->",temp->data);
 temp = temp->next;
 }
 printf("%d--->NULL\n\n",temp->data);
 }
}
int main()
{
 int choice, value;
 printf("\nimplementation of stack using
linked list\n");
 while(1)
 {
 printf("1. push\n2. pop\n3. display\n4.
exit\n");
 printf("\nenter your choice :");
 scanf("%d",&choice);
 switch(choice)
 {
 case1:
 printf("\nenter the value to insert");
 scanf("%d",&value);
 push(value);
 break;
 case2:
 printf("popped element
is:%d\n",pop());
 break;
 case3:
 display();
 break;
 case4:
 exit(0);
 break;
 default:
 printf("\nwrong choice\n");
 }
 }
}
