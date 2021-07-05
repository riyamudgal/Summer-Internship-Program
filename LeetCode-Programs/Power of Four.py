class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        num=n
        while num>1:
            num=num/4
        if num==1:
            return True
        else:
            return False
