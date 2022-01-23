class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1.sort()
        nums2.sort()
        n=len(nums1)
        m=len(nums2)
        
        i=0
        j=0
        res=[]
        while(i<n  and j<m):
            if(nums1[i]>nums2[j]):
                j=j+1
                
            elif (nums2[j]>nums1[i]):
                i=i+1
                
            else:
                res.append(nums1[i])
                i=i+1
                j=j+1
        return res
