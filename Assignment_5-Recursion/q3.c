#include<stdio.h>
int num;
int call(int n,char x, char y,char z){
    
    if(n==1){
        printf("%c to %c \n",x,y);
        printf("%c to %c \n",x,z);
        printf("%c to %c \n",y,z);
    }
    else{
        int test=call(n-1,x,z,y);
        
          if(n!=num){
          printf("%c to %c \n",x,z);
          call(n-1,y,x,z);
          }
            
        
        
    }
    
}

int main()
{
  
  scanf("%d",&num);
  int n=num;
  call(n,'a','c','b');
  return 0;
}

