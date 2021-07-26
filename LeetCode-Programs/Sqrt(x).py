class Solution:
    def mySqrt(self, x: int) -> int:
        s=math.sqrt(x)
        return trunc(s)
      
      
      #trunc() method returns the truncated integer part of a number.
        
        
#without using inbuilt function
class Solution:
    def mySqrt(self, x: int) -> int:
        start=0
        end=x
        
        while start<=end:
            mid=(start+end)//2
            
            if mid*mid>x:
                end=mid-1
            elif mid*mid<x:
                start=mid+1
            else:
                return mid
        
        
        return end
