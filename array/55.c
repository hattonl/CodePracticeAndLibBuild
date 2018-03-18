bool canJump(int* nums, int numsSize) {
    /* 从左到右遍历数组
       这是变量，jumpNum，zeroNum，索引i
     找到第一个是0的数字，然后另jumpNum = nums[i-1];
        如果i = 0，直接返回false
     然后指针向后继续遍历，统计所有连续的0的个数。放到变量zeroNum中。
     判断。 jumpNum > zeroNum 则这一组连续的0可以被跳过，否则返回false
     如果可以被跳过，这时指针i应该指向了一个非0的元素。清空jumpNum和zeroNum
     然后继续执行
     */
    
    int jumpNum, zeroNum, i;
    
    for (jumpNum = zeroNum = i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0) {
            if(i == 0) {
                if (numsSize == 1)
                    return true;
                else 
                    return false;
            }
            else {
                jumpNum = nums[i-1];
                zeroNum = 1;
                i++;
                while (nums[i] == 0 && i < numsSize) {
                    zeroNum ++;
                    i++;
                }

                if (i >= numsSize) {
                    if (jumpNum >= zeroNum)
                        continue;
                } else {
                    if (jumpNum <= zeroNum)
                        return false;
                    else
                        jumpNum = 0;
                        zeroNum = 0;
                        continue;
                }
            }
        }
    }
    
    return true;
}


/*
上述答案是一个错误答案，因为执行下面操作的时候没有通过。
 Input:
 [0]
 Output:
 false
 Expected:
 true
 
 */

// 答案错误，尚未解决
