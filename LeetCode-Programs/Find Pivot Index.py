class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        summ=sum(nums)
        l_sum=0
        for i in range(len(nums)):
            if(l_sum==summ-l_sum-nums[i]): 
                return i
            l_sum=l_sum+nums[i]
        return -1
