class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        new_list=[]
        for i in range(left, right+1):
            temp=i
            while temp>0:
                res=temp%10
                if res==0 or i%res!=0:
                    break
                temp=temp//10
            if temp==0:
                new_list.append(i)
        return new_list
