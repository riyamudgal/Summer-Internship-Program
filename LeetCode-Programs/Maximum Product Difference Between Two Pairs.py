class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        nums.sort()
        n1=len(nums)-1
        n2=len(nums)-2
        
        prod=nums[n1]*nums[n2]
        
        prod1=nums[0]*nums[1]
        return (prod-prod1)
