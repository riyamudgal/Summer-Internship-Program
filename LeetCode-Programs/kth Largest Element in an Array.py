class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums.sort()
        ans=nums[len(nums)-k]
        return ans
