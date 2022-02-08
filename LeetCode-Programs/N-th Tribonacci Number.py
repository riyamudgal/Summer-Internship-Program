class Solution:
    def tribonacci(self, n: int) -> int:
        '''if n==0:
            return  0
        if n==1 or n==2:
            return 1            
        return self.tribonacci(n-1) + self.tribonacci(n-2) + self.tribonacci(n-3)'''
        new_list=[0,1,1]
        for i in range(3, n+1):
            new_list.append(new_list[i-3]+new_list[i-2]+new_list[i-1])
        return new_list[n]
            
