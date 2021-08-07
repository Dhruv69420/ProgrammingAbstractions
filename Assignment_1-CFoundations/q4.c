#include <stdio.h>

int func(int a[],int j){
    int i=0;
    j--;
    int temp=j;
    int arr[j];
    
    while(a[i+1]!='\0'){
        arr[i]=a[j];
        i++;
        j--;
    }
    i=0;
    while(a[i+1]!='\0'){
        a[i]=arr[i];
        i++;
    }
}
int main()
{
   int a[]={1,2,3,4,5};
   int j=sizeof(a)/sizeof(int);
   func(a,j);
   int i =0;
   while(a[i+1]!='\0'){
    printf("%d ",a[i]);
    i++;
   }
    return 0;
}



