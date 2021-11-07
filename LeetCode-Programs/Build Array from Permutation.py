class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        new_list=[]
        for i in range(len(nums)):
            new_list.append(nums[nums[i]])
        return new_list
    
    
#second
class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        new_list=[]
        for i in nums:
            new_list.append(nums[i])
        return new_list
