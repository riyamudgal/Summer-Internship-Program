class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        num=n
        while num>1:
            num=num/3
        if num==1:
                return True
        else:
                return False
