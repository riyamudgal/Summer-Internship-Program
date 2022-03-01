class Solution:
    def countBits(self, n: int) -> List[int]:
        count=0
        new_list=[]
        i=0
        for i in range(n+1):
            temp=i
            while temp!=0:
                if temp%2==1:
                    count=count+1
                temp=temp//2
            new_list.append(count)
            count=0
        return new_list
        
        
        
        
        
        
        
        
class Solution:
    def countBits(self, n: int) -> List[int]:
        new_list=[]
        r=0
        for i in range(n+1):
            new_list.append(bin(i).count("1"))
        return new_list
