#using Counter function, Counter counts the number of occurences of list elements
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        a=Counter(nums)
        for i in a:
            if a[i]>1:
                return i
                
                
                
#sorting nand then comparing
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums)):
            if nums[i-1]==nums[i]:
                return nums[i]
