class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]: 
        n=len(nums)
        for i in range(len(nums)):
            if nums[i]==target:
                a=i
                break
            elif i==n-1:
                a=-1
        for j in range(len(nums)-1,-1, -1):
            if nums[j]==target:
                b=j
                break
            elif j==0:
                b=-1
        if len(nums)==0:
            a=-1
            b=-1
        nums.clear()
        nums.append(a)
        nums.append(b)
        
        return nums
            
        
        
        
#some test cases didn't work with this code        
 '''
 class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]: 
        new_list=[]
        if target not in nums:
            return [-1,-1]
        if len(nums)==1:
            new_list.append(nums.index(target))
            new_list.append(nums.index(target))
        else:
            new_list.append(nums.index(target))
            nums.sort()
            new_list.append(nums.index(target)+1)
        return new_list
'''
