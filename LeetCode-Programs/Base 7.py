#TLE
class Solution:
    def convertToBase7(self, num: int) -> str:
        ans=0
        temp=1
        while num!= 0:
        
            ans=ans+(num%7)*temp
            num=num//7
            temp=temp*10
        
        return str(ans)
