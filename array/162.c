int findPeakElement(int* nums, int numsSize) {
    int i;
    if (numsSize <= 1)
        return 0;
    if (nums[0] >= nums[1])
        return 0;
    for (i = 1; i < numsSize-1; i++) {
        if (nums[i] > nums[i-1] && nums[i] > nums[i+1]) {
            return i;
        }
    }
    if (nums[i] > nums[i-1])
        return i;
        
}