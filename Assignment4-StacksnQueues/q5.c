#include<stdio.h>
#include <stdlib.h>
int*stack2;

int top1=-1,top2=-1;
int count=0;
int peek(int* stack,int top){
   
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
	 return stack[top];
   }
}
int push(int* stack,int* top,int value){
    ++count;
    
    
    stack[++(*top)] = value;
    //printf(" *%d %d* ",count,top2);
   
   if(count<=2){
      
    if(top2 == -1){
      
       push(stack2,&top2,value);
       //printf("%d %d ",top2,count);
       
    }
   
    else{
       //printf("** %d **",top2);
       if(value<(peek(stack2,top2))){
           push(stack2,&top2,value);
       }
       else{
           push(stack2,&top2,peek(stack2,top2));
           
       }
    }
   }
   else {
    count=0;
       
   }
}
int pop(int* stack,int* top){
   if(*top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      --top2;
      return stack[(*top)--];
      
   }
}
int getmin(){
    return pop(stack2,&top2);
}
void main()
{
    int* stack1;
    stack1 = (int*)malloc(10*sizeof(int));
    stack2 = (int*)malloc(10*sizeof(int));
    push(stack1,&top1,-2);
    push(stack1,&top1,0);
    push(stack1,&top1,-3);
    printf("%d",getmin());
    pop(stack1,&top1);
    printf("%d",peek(stack1,top1));
    printf("%d",getmin());
    
    
    
    
    
   
}
