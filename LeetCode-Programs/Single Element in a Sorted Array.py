class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        count=Counter(nums)
        for i in count:
            if count[i]==1:
                return i
            
#using binary search
class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        l=0
        h=len(nums)-1
        while l<h:
            mid=(l+h)//2
            if mid%2==1:
                if nums[mid-1]==nums[mid]:
                    l=mid+1
                else:
                    h=mid
            else:
                if nums[mid]!= nums[mid+1]:
                    h=mid
                else:
                    l=mid+1
        return nums[l]
