
#include <stdio.h>
#include<stdlib.h>
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;

void enqueue(int item)
{
   
    if(rear == MAX - 1)
        printf("Queue Overflow");
    else
    {
        if(front== - 1)
        front = 0;
        rear = rear + 1;
        queue_array[rear] = item;
    }
}
void is_empty(){
    if(front == - 1 || front > rear)
    {
        
        return 1;
    }
    else{
	    return 0;
    }
}
void dequeue()
{
    if(front == - 1 || front > rear)
    {
        printf("Queue Underflow");
        return;
    }
    else
    {
	front++;
        return  queue_array[front];
        
    }
}

void peek()
{
    int i;
    if(front == - 1)
        printf("Queue is empty");
    else
    {
            return  queue_array[front];
    }
}  

int main()
{

        enqueue(25);
        enqueue(32);
        int top_element= dequeue();
        enqueue(69);
        top_element= peek();
        int test=is_empty();

}

