class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        gap=0
        nums.sort()
        if len(nums)<2:
            return 0
        for i in range(1, len(nums)):
            gap=max(ga
