class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        num=n
        while num>1:
            num=num/2
        if num==1:
            return True
        else:
            return False
        
