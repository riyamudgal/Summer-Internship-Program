class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count=0
        ans=0
        for i in range(len(nums)):
            if nums[i]==1:
                count=count+1
            else:
                ans=max(ans,count)
                count=0
                
        ans=max(ans,count)
        return ans
        
