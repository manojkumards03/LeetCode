int compare(const void* p1, const void* p2)
{
    return (*(int*)p1 - *(int*)p2);
}

int* numberGame(int* nums, int numsSize, int* returnSize) 
{
     qsort(nums, numsSize, sizeof(int), compare);
    int tmp;
    for(int i=0;i<numsSize/2;i++)
    {
        tmp=nums[i*2];
        nums[i*2]=nums[i*2+1];
        nums[i*2+1]=tmp;
    }
    *returnSize=numsSize;
    return nums;
}
