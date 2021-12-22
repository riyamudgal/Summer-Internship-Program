class Solution:
    def check(self, nums: List[int]) -> bool:
        count, size=0, len(nums)
        #for i in nums:
          #  if i>i+1:
        for i in range(len(nums)-1):
            if nums[i]>nums[i+1]:
                count=count+1
        if count==1 and nums[0]>=nums[size-1]:
            return True
        elif count>=1:
            return False
        return True
