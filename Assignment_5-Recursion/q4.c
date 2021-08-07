#include <stdio.h>
void call(int a, int b, int count, int i){
    
    if(count<=i){
    int c=a+b;
    if(count%3==0){
        printf("%d ",c);
    }
    a=b;
    b=c;
    call(a,b,++count,i);
    }
    else
        return 0; 
}
int main()
{
    int i=10;
  call(0,1,2,i);
  

    return 0;
}
