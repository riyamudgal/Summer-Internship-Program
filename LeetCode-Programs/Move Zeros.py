class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        for i in nums:
            if i==0:
                nums.remove(i)
                nums.append(i)
                
                
                
#Here at first Zero is removed from the list then it is appended at the end of list
      
