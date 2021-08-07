#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf(" ");
        }
        k--;
        for(int j=0;j<=i;j++){
            printf("# ");
        }
        
        
        printf("\n");
    }
    return 0;
}


