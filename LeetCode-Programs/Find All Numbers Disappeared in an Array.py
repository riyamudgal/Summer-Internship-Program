class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        num=set(nums)
        new_list=[]
        for i in range(1,len(nums)+1):
            if not i in num:
                new_list.append(i)
        return new_list
