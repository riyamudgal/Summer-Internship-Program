class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        new_list=[]
        for i in range(len(nums)):
            new_list.append(nums[nums[i]])
        return new_list
