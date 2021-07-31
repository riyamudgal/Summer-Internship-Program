class Solution:
    def missingNumber(self, nums: List[int]) -> int:
       
        length=len(nums)
        sum1=sum(nums)
        sum2=length*(length+1)//2
        
        ans=abs(sum1-sum2)
        return ans
