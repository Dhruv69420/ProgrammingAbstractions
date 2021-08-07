#include <stdio.h>
int a[]={3,0,4,0,1};
int path=0,comp=1,min=0;
void call(){
     if(path==3){
         return 0;
     }
     else{
         if(comp==5){
             if(a[min]!=a[path]){
                 
                a[min]-=a[path];
                a[path]+=a[min];
                a[min]=a[path]-a[min];
             }
             
             min=++path;
             comp=min+1;
             call();
         }
         else if(a[min]>a[comp]){
             min=comp;
             comp++;
             call();
         }
         else{
             comp++;
             call();
         }
            
         
     }
    
}

int main()
{
    
    call();
    for(int i=0;i<5;i++)
       printf("%d",a[i]);
}
