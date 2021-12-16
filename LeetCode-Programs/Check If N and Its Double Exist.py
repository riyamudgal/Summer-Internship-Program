class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        n=0
        for i in range(len(arr)):
            n=2*arr[i]
            for j in range(len(arr)):
                if j!=i and n==arr[j]:
                    return True
        return False
