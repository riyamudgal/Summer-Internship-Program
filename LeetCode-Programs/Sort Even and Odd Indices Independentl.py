class Solution:
    def sortEvenOdd(self, nums: List[int]) -> List[int]:
        '''for i in range(0,len(nums)-2):
            if i%2!=0:
                if nums[i]<nums[i+2]:
                    nums[i], nums[i+2] = nums[i+2], nums[i]
                    
            else:
                if nums[i]>nums[i+2]:
                    nums[i], nums[i+2] = nums[i+2], nums[i]
                    
        return nums
        '''
        for i in range(0,len(nums), 2):
            for j in range(i+2, len(nums), 2):
                if nums[i]>nums[j]:
                    nums[i], nums[j] = nums[j], nums[i]
                    
        for i in range(1, len(nums), 2):
            for j in range(i+2, len(nums), 2):
                if nums[i]<nums[j]:
                    nums[i], nums[j] = nums[j], nums[i]
                    
        return nums
