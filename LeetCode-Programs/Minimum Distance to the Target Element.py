class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        ans=len(nums)
        for i in range(len(nums)):
            temp=0
            if nums[i]==target:
                temp=abs(i-start)
                if temp<ans:
                    ans=temp
        return ans
