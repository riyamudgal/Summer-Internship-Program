class Solution:
    def makeFancyString(self, s: str) -> str:
        count=1
        strr=''
        strr=strr+s[0]
        for i in range(1, len(s)):
            if s[i]==s[i-1]:
                count=count+1
            else:
                count=1
            if count<3:
                strr=strr+s[i]
        return strr
