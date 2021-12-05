class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        new_list=[]
        for i in nums:
            count=0
            for j in nums:
                if j<i:
                    count=count+1
            new_list.append(count)
        return new_list
