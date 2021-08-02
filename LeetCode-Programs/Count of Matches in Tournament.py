class Solution:
    def numberOfMatches(self, n: int) -> int:
        total=0
        while n>1:
            if n%2==0:
                match=n//2
                n=n//2
                
            else:
                match=n//2
                n=(n-1)//2
                n=n+1
                
            total=total+match
        return total
