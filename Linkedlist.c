//Traversal of linked list in c

#include<stdio.h>

#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct  node* createnode(int data){
struct node* newnode=(struct  node*) malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
return newnode;
}
void traverselist(struct node* head){
    struct node* temp=head;
while(temp!=NULL){
    printf("%d ->",temp->data);
    temp=temp->next;
}
printf("NULL\n");
}
int main(){
    
    struct node* head=createnode(10);
    head->next=createnode(20);
    head->next->next=createnode(30);
    head->next->next->next=createnode(40);
    printf("Linked List:");
    traverselist(head);
    return 0;
}