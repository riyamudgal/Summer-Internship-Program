class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        count=0
        while num1!=0 and num2!=0:
            if num1>=num2:
                num1=num1-num2
                count=count+1
            else:
                num2=num2-num1
                count=count+1
        return count
    
    
    
    
    
    
    
#tle
class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        count=0
        while True:
            if num1==0 or num2==0:
                return count
            if num1>=num2:
                num1=num1-num2
                count=count+1
            else:
                ans=num2-num1
                count=count+1
        return count
      
      
      
      
      
