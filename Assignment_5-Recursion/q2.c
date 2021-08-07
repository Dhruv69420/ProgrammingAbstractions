#include <stdio.h>
int call(int divisor,int dividend){
    int rem=dividend%divisor;
    if(rem==0){
        return divisor;
    }
    else{
        dividend=divisor;
        divisor=rem;
        return call(divisor,dividend);
    }
       
}
int main()
{
    
    int n=10,m=15;
    int divisor=n,dividend=m;
    if(n>m){
        dividend=n;
        divisor=m;
    }
      
    printf("%d",call(divisor,dividend));

    return 0;
}
