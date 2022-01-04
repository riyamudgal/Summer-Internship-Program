class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        new_list=[]
        i, j =0, len(numbers)-1
        while i<j:
            if numbers[i]+numbers[j]<target:
                i=i+1
            elif numbers[i]+numbers[j]>target:
                j=j-1
            else:
                new_list.append(i+1)
                new_list.append(j+1)
                return new_list
        return new_list
      
      
      
      
      
#TLE

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        new_list=[]
        i, j =0, len(numbers)-1
        while i<j:
            if numbers[i]+numbers[j]<target:
                i=i+1
            elif numbers[i]+numbers[j]>target:
                j=j-1
            else:
                new_list.append(i+1)
                new_list.append(j+1)
                
        return new_list
      
      
      
      
      
