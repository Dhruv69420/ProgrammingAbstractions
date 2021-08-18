#include <stdio.h>
#include<stdlib.h>
#define MAX 50
int arr1[MAX];
int arr2[MAX];
int rear1 = - 1;
int front1 = - 1;
int rear2 = - 1;
int front2 = - 1;

void enqueue(int arr[],int *rear,int *front,int item)
{
   
    if(*rear == MAX - 1)
        printf("Queue Overflow");
    else
    {
        if(*front== - 1)
        *front = 0;
        *rear = *rear + 1;
        arr[*rear] = item;
    }
}
int is_empty(int* rear,int* front){
    if(*front == - 1 || *front > *rear)
    {
        return 1;
    }
    else{
	    return 0;
    }
}
int dequeue(int arr[],int *rear,int *front)
{
    if(*front == - 1 || *front > *rear)
    {
        printf("Queue Underflow");
    
    }
    else
    {
	    
        return  arr[(*front)++];
        
    }
}

int peek(int arr[],int *front)
{
    int i;
    if(*front == - 1)
        printf("Queue is empty");
    else
    {
            return  arr[*front];
    }
}  
void push(int n){
    enqueue(arr2,&rear2,&front2,n);
    while(!is_empty(&rear1,&front1)){
        enqueue(arr2,&rear2,&front2,dequeue(arr1,&rear1,&front1));
    }
    
    while(!is_empty(&rear2,&front2)){
        enqueue(arr1,&rear1,&front1,dequeue(arr2,&rear2,&front2));
    }
}
int pop(){
    return dequeue(arr1,&rear1,&front1);
}
int top(){
    return peek(arr1,&front1);
}
int empty(){
    return is_empty(&rear1,&front1);
}
int main()
{
        push(12);
        push(13);
        push(14);
        push(15);
        int popped=pop();
        int top_element=top();
        printf("%d %d",popped,top_element);

}

