class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        e_count=0
        o_count=0
        for i in range(len(position)):
            if position[i]%2==0:
                e_count=e_count+1
            else:
                o_count=o_count+1
        return min(e_count, o_count)
      
      
      
      
      
#different way of writing above code
class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        e_count=0
        o_count=0
        for i in position:
            if i%2==0:
                e_count=e_count+1
            else:
                o_count=o_count+1
        return min(e_count, o_count)
