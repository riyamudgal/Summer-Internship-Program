class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        count,ans=0,0
        for i in range(1, len(nums)-1):
            if nums[i]-nums[i-1]==nums[i+1]-nums[i]:
                count+=1
                ans+=count
            else:
                count=0
        return ans
