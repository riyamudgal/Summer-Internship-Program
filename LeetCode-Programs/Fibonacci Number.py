class Solution:
    def fib(self, n: int) -> int:
        if n== 0: 
            return 0
        if n==1:
            return 1
        return self.fib(n-1) + self.fib(n-2)               #self, beacuse we are calling the same function recursively

    
#second way
class Solution:
    def fib(self, n: int) -> int:
        a=0
        b=1
        for i in range(n):
            a,b=b,a+b
        return a
    
