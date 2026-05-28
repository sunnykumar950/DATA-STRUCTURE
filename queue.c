#include<stdio.h>
#include<stdlib.h>
#define max 7
int front=-1, rear=-1;
int queue [max];


void enqueue(int value) //insert element in the queue
{
    if(rear==max-1)
    {
        printf("Queue is overflow\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    queue[++rear]=value;
}
void peek() //display the front element of the queue
{
    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element is %d\n", queue[front]);
    }
}


void dequeue() //delete element from the queue
{
if(front==-1||front>rear)
{
    printf("Queue is underflow\n");
    return;
}
printf("Deleted element is %d\n",queue[front]);
front++;

if(front>rear)
{
    front=rear=-1;
}
}


void display() //display all elements in the queue
{
    if(front==-1||front>rear)
    {
        printf("Queue is empty\n");
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    display();
    peek();
    display();
    dequeue();
    display();
    dequeue();
    display();
    return 0;
}