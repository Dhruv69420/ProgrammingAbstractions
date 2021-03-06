#include <math.h>
#include <stdio.h>
#include<sys/time.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
int main()
{
    int n;
    char c;
    for(int i=0;i<3;i++){
        if(i==0){
            c='r';
        }
        if(i==1){
            c='d';
        }
        if(i==2){
            c='a';
        }
        for(int j=2;j<9;j++){
            n=4000*j;
            int arr[n];
            if(c=='r'){
              for(int k=0;k<n;k++){
                  arr[k]=rand();
              }
            }
            if(c=='d'){
              for(int k=n;k>0;k--){
                  arr[k]=k;
              }
            }
            if(c=='a'){
              for(int k=0;k<n;k++){
                  arr[k]=k;
              }
            } 
            struct timeval time1;
            gettimeofday(&time1, NULL);
            bubbleSort(arr, n);
            struct timeval time2;
    
        gettimeofday(&time2, NULL);
            printf("%c %d micro seconds : %ld",c,n,(time2.tv_sec-time1.tv_sec)*1000000+time2.tv_usec-time1.tv_usec);
            printf("\n");
        }
    }
 
    return 0;
}
