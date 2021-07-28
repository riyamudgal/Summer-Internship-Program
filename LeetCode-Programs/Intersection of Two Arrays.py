class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums3=[value for value in nums1 if value in nums2]
        nums3= list(set(nums3))
        return nums3
