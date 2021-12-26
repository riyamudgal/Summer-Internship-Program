class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        maxx=0
        for i in range(len(colors)):
            for j in range(i,len(colors)):
                if colors[i]!=colors[j]:
                    maxx=max(j-i, maxx)
        return maxx
            
