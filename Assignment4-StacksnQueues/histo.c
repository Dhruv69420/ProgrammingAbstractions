

int largestRectangleArea(int* a, int n){
int max=0,count=1,flag=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
            flag=1;
          
    }
    if(flag==0)
        return a[0]*n;
        
    else    
    for(int i=0;i<n;i++){
        
        if(i==0){
            for(int j=1;j<n;j++){
                if(a[j]>=a[i]){
                    count++;
                }
                else
                    break;
            }
            max=a[i]*count;
            
            count=1;
        }
        else{
            for(int f=i+1;f<n;f++){
                if(a[f]>=a[i]){
                    count++;
                }
                else
                    break;
                
            }
            for(int b=i-1;b>=0;b--){
                if(a[b]>=a[i]){
                    count++;
                }
                else
                    break;
            }
            if(a[i]*count>max){
                max=a[i]*count;
                if(max==50)
                    printf("%d",i);
            }
            count=1;
        }
    }
    return max;
}



