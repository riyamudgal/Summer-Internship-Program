class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        '''nums.sort()
        if nums[0]+nums[1]>nums[2]:
            return nums[0]+nums[1]+nums[2]
        return 0
        '''
        nums.sort()
        per=0
        for i in range(len(nums)-2):
            if nums[i]+nums[i+1]>nums[i+2]:
                per=nums[i]+nums[i+1]+nums[i+2]
        return per
            
