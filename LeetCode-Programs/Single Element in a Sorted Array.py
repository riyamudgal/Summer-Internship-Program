class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        count=Counter(nums)
        for i in count:
            if count[i]==1:
                return i
