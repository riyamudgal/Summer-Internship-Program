class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        count_dec, count_inc=1,1
        for i in range(len(nums)-1):
            if nums[i]>=nums[i+1]:
                count_dec+=1
            if nums[i]<=nums[i+1]:
                count_inc+=1
        if count_dec==len(nums) or count_inc==len(nums):
            return True
        return False
