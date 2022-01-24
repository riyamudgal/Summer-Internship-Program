class Solution:
    def isPalindrome(self, x: int) -> bool:
        num=0
        temp=x
        
        while x>0:
            y=x%10
            x=x//10
            num=num*10+y
        if num==temp:
            return True
        return False
      
      
      
      
      
      
      
      
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if str(x) == str(x)[::-1]:
            return True
