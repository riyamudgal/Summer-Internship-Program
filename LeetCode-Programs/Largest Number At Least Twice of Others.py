class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        a=max(nums)
        for i in range(len(nums)):
            if nums[i]==a:
                ans=i
                continue
            if nums[i]*2>a:
                return -1
        return ans
        
