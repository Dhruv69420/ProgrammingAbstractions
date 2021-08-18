int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){

    int i;
    int* ptr = (int*)malloc((numsSize-1)*sizeof(int));
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