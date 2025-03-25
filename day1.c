#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target)
{
    int mid,start = 0,end = numsSize-1;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    if(start>end)
    {
        return mid+1;
    }
}
void main()
{
    int a[] = {1,3,5,6};
    int Size = sizeof(a)/sizeof(a[0]);
    int target;
    printf("Enter the targeted number: ");
    scanf("%d",&target);
    int result = searchInsert(a,Size,target);
    printf("The index at which we found that is: %d",result);
}