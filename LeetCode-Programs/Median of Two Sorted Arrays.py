class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:

        num=[]
        for i in range(len(nums1)):
            num.append(nums1[i])
        for i in range(len(nums2)):
            num.append(nums2[i])
        num.sort()
        s=len(num)
        
        mid=(0+s-1)//2
        if s%2==0:
            median=(num[mid]+num[mid+1])/2
        else:
            median=num[mid]
        return median
