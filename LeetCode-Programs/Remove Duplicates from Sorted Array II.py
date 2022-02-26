class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        '''for i in range(1, len(nums)):
            if nums[i-1]==nums[i+1]:
                nums.remove(nums[i])
                i=i-1
        return len(nums)'''
        s=set(nums)
        for i in s:
            while nums.count(i) > 2:
                nums.remove(i)
        return len(nums)
