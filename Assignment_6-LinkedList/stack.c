#include <stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* next;
};

struct node* head=NULL;


void push(int val)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->val = val;
    new_node->next = head;
    head = new_node;   
}
int is_Empty(){
    if(head==NULL)
      return 1;
      
    else
      return 0;
}
int pop(){
    if(!is_Empty()){
        int x=head->val;
        head=head->next;
        return x;
    }
    else{
        printf("Stack Underflow");
    }
}
int peek(){
    if(!is_Empty()){
        return head->val;
    }
    else{
        printf("Stack is Empty");
    }
}
int main()
{
    
    push(5);
    push(10);
    push(15);
    pop();
    pop();
    push(69);
    push(420);
    pop();
    peek();
    pop();
    pop();
    
    

    return 0;
}

