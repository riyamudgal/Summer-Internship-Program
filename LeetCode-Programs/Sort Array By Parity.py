class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        new_list=[]
        for i in nums:
            if i%2==0:
                new_list.append(i)
        for j in nums:
            if j%2!=0:
                new_list.append(j)
        return new_list
        
