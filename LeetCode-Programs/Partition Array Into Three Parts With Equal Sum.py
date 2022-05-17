class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        total_sum=sum(arr)
        temp= total_sum//3
        summ, count=0, 0
        for i in range(len(arr)):
            summ+=arr[i]
            if summ==temp:
                count+=1
                summ=0
        return count>=3 and total_sum%3==0
