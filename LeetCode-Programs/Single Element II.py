class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        new_list=[]
        nums.sort()
        for i in range(len(nums)):
            if nums.count(nums[i])==1:
                new_list.append(nums[i])
                
        return new_list
