class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        s=len(nums)
        i,j=0,1
        while i<s and j<s:
            if nums[i]%2==0:
                i=i+2
            if nums[j]%2==1:
                j=j+2
            else:
                nums[i],nums[j] = nums[j],nums[i]
        return nums
