class Solution:
    def maxPower(self, s: str) -> int:
        count=1
        maxx=1
        for i in range(1,len(s)):
            if s[i-1]==s[i]:
                count+=1
                maxx=max(maxx, count)
            else:
                count=1
        return max(maxx, count)
