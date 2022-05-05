class Solution:
    def generateTheString(self, n: int) -> str:
        strr=""
        if n%2==0:
            for i in range(n-1):
                strr+='p'
            strr+='z'
        else:
            for i in range(n):
                strr+='p'
        return strr
