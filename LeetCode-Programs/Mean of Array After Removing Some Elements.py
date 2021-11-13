class Solution:
    def trimMean(self, arr: List[int]) -> float:
        remove=0.05*len(arr)
        n=len(arr)
        arr.sort()
        per=n*5//100
  
        summ,ans,count=0,0,0
        
        for i in range(per, n-per):
            count=count+1
            summ=summ+arr[i]
        ans=summ/count
        return ans
