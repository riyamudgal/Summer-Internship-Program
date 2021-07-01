class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        nums.sort()
        num=[]
        s=len(nums)
        for i in range(1,s):
                if nums[i]==nums[i-1]:
                    num.append(nums[i])
        return num
