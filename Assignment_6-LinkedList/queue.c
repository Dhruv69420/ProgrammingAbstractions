#include <stdio.h>
#include<stdlib.h>
struct toad{
    int val;
    struct toad* next;
};
struct toad* head;
struct toad* temp;
int enqueue(int val){
    if(head->val==NULL){
    head->val=val;
    temp=head;
    }
    else{
        
        struct toad* new = (struct toad*)malloc(sizeof(struct toad));
        new->val=val;
        new->next=NULL;
        temp->next=new;
        temp=new;
        
    }
}
int is_Empty(){
    if(head==NULL)
      return 1;
    else 
      return 0;
}
int dequeue(){
    if(is_Empty()){
       printf("Queue is Empty");
    }
    else{
        int x=head->val;
        head=head->next;
        return x;
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
    head = (struct toad*)malloc(sizeof(struct toad));
    temp = (struct toad*)malloc(sizeof(struct toad));
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    dequeue();
    enqueue(6);
    dequeue();
    printf("%d",peek());   
    
    
    

    return 0;
}


