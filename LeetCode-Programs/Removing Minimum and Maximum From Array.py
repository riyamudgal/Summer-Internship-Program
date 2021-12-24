class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        temp1, temp2=0,0
        ans=0
        mi=min(nums)
        ma=max(nums)
        for i in range(len(nums)):
            if mi==nums[i]:
                temp1=i
            if ma==nums[i]:
                temp2=i
        if temp1>temp2: 
            temp1, temp2 = temp2, temp1
        ans=min(len(nums)-temp1 , temp1+1+len(nums)-temp2)
        return min(temp2+1, ans)
