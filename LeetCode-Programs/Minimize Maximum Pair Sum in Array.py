class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort()
        m_sum,summ=0,0
        i,j=0,len(nums)-1
        while i<j:
            summ=nums[i]+nums[j]
            m_sum=max(m_sum, summ)
            i=i+1
            j=j-1
        return m_sum
