#include <stdio.h>
#include<math.h>
int main()
  
{
    printf("Enter the prisoners' number who died from 1 to 10 without giving space between subsequent numbers."); 
    char c[10];
    scanf("%s",&c);
    int n=atoi(c);
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    while(n>0){
        a[(n%10)-1]=1;
        n/=10;
    }
    int ans=0;
    for(int i=0;i<10;i++){
        ans+=a[i]*pow(2,i);
    }
    printf("bottle no.%d was poisoned",ans);
    }


