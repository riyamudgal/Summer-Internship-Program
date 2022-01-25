class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        temp=0
        for i in range(1,len(arr)):
            if arr[i-1]==arr[i]:
                return False
            if arr[i-1]>arr[i]:
                if i==1:
                    return False
                else:
                    temp=1
            if arr[i-1]<arr[i] and temp==1:
                return False
        if temp==1:
            return True
        return False
        
