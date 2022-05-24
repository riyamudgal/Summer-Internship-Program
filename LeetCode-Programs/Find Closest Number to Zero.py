class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        res=float("inf")                           #If a number that's bigger than all others, we can use float("inf")
        for i in range(len(nums)):
            if abs(nums[i])< abs(res):
                res= nums[i]
            elif abs(nums[i])== abs(res):
                res= max(res, nums[i])
        return res
        
