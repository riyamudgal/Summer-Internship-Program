class Solution:
    def climbStairs(self, n: int) -> int:
        c,a,b=0,1,2
        
        if n<=0: 
            return 0
        if n==1: 
            return 1
        if n==2:
            return 2
    
        for i in range(2,n):
            c=b+a
            a=b
            b=c
        return c
    	    
