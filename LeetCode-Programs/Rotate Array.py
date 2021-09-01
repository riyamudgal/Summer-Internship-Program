class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        v=[]
        length=len(nums)
        k=k%length
        for i in range(length-k, length):
            v.append(nums[i])
        for i in range(length-k):
            v.append(nums[i])
        #swapping
        temp=nums[:]
        nums[:]=v[:]
        v[:]=temp
