class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        new_list=[]
        summ=0
        for i in range(len(nums)):
            summ=summ+nums[i]
            new_list.append(summ)
        return new_list
