class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        res=[]
        #ns=(len(nums)//2)
        for i in range (len(nums)//2):
            res.append(nums[i])
            res.append(nums[i+(len(nums)//2)])
        return(res)
    
