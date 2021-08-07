#include <stdio.h>

 

float squareRoot(int n, int p)
{
    int start = 0, end = n;
    int mid;
 
    
    float res;
 
    
    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == n) {
            res = mid;
            break;
        }
 
                if (mid * mid < n) {
            start = mid + 1;
            res = mid;
        }
 
        
        else {
            end = mid - 1;
        }
    }
 
    
    float inc = 0.1;
    for (int i = 0; i < p; i++) {
        while (res * res <= n) {
            res += inc;
        }
 
        
        res-= inc;
        inc/= 10;
    }
    return res;
}

 void main(){
     int n,p;
     scanf("%d %d",&n, &p);
     printf("%g", squareRoot(n,p));

 }
