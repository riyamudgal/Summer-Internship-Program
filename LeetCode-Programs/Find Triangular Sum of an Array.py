class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        while len(nums)>1:
            newNums=[]
            for i in range(len(nums)-1):
                temp=(nums[i]+nums[i+1])%10
                newNums.append(temp)
            nums=newNums
        return nums[0]
