#TLE

class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        temp=num
        rev=0
        while temp>0:
            rev=rev*10 + temp%10
            temp=temp/10
        temp=rev
        temp2=0
        while temp>0:
            temp2=temp2*10 + temp%10
            temp=temp/10
        if num==temp2:
            return True
        else:
            return False
        
        
        
        
        
        
        
 class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        '''temp=num
        rev=0
        while temp>0:
            rev=rev*10 + temp%10
            temp=temp/10
        temp=rev
        temp2=0
        while temp>0:
            temp2=temp2*10 + temp%10
            temp=temp/10
        if num==temp2:
            return True
        else:
            return False'''
        
        '''rev=int(str(num(::-1)))
        reve=int(str(rev(::-1)))
        if num==reve:
            return True
        else:
            return False'''
        return num==int(str(int(str(num)[::-1]))[::-1])
