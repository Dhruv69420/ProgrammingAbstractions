int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
    
    int i;
    *returnSize=numsSize-k+1;
    int* ptr = (int*)malloc((numsSize)*sizeof(int));
    if(numsSize==1){
        *ptr=nums[0];
        return ptr;
    }
    for(i=0;i<numsSize-k+1;i++){
        int max=nums[i];
        for(int j=i;j<i+k;j++){
            if(nums[j]>max){
                max=nums[j];
            }
        }
        ptr[i]=max;
    }
    ptr[i]='\0';
    return ptr;
        
}
