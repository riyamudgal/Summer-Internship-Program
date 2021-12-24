class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        n=len(nums)
		
		//Using list comprehensions, I've initialized two new lists, one for left and another for right, having size n(size of predefined list
        left_list= [0 for i in range(n+1)]
        right_list=[0 for i in range(n+1)]
        
        left_list[0]=nums[0]
        for i in range(1,n):
            left_list[i]=nums[i]+left_list[i-1]
            
        right_list[n-1]=nums[n-1]
        for i in range(n-2,-1,-1):
            right_list[i]=nums[i]+right_list[i+1]
            
        for i in range(n):
            if(left_list[i]==right_list[i]):
                return i
        return -1
