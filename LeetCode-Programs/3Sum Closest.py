class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        res = nums[0] + nums[1] + nums[2]
        for i in range(len(nums)):
            j=i+1 
            k=len(nums) - 1
            while j<k:
                sum=nums[i]+nums[j]+nums[k]
                if abs(target-res)>abs(target-sum): 
                    res=sum
                if sum<target: 
                    j+=1
                elif sum>target: 
                    k-=1
                elif sum==target: 
                    return target
        return res
