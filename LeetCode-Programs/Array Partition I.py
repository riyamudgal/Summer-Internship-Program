class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        temp= 0
        for i in range(0, len(nums)-1, 2):
            temp=temp+nums[i]
        return temp
