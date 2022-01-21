class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ans=0
        alt=0
        for i in gain:
            alt=alt+i
            if alt > ans:
                ans=alt
        return ans
      
      
      
      
      
      
      
      
class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        res= 0
        alt=0
        for i in range(len(gain)):
            alt=alt+gain[i]
            if alt > res:
                res=alt
        return res
