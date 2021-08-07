#include<stdio.h>

#define SIZE 10

int Stack[SIZE], top=-1;

int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

int push(int item)
{
  if (isFull())
  {
    printf("OVERFLOW");
    return -1;
  }
  printf("%d pushed to stack\n",item);
  Stack[++top] = item;
  
}

int pop()
{
  int temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  temp=Stack[top--];
  printf("%d popped from stack\n", temp);
  return temp;
}

int peek()
{
    int i;
    if(top == - 1)
        printf("Queue is empty");
    else
    {
            return  Stack[top];
    }
}


int main()
{
  int temp;
  push(12);
  push(23);
  temp=pop();
  push(54);
  temp=pop();
  temp=pop();
  temp=pop();
  int p=peek();
  return 0;
}

