class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        for i in set(t):
            if s.count(i)!=t.count(i):
                return i
            
            
            
#2nd method

class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        zs=sorted(s)
        zt=sorted(t)
        i=0
        j=0
        while i<len(zs):
            if zs[i]!=zt[j]:
                return zt[j]
            i=i+1
            j=j+1
        
        return zt[len(zt)-1]
