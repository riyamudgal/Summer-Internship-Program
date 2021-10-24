class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
        temp1=1
        temp2=1;
        n=len(nums)-1
        temp1=nums[n]*nums[n-1]*nums[n-2]
        temp2=nums[n]*nums[0]*nums[1]
        ans=max(temp1, temp2)
        return ans
