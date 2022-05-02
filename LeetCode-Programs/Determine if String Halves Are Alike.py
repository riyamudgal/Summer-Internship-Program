class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        mid=len(s)//2
        count_l, count_r= 0, 0
        for i in range(0,mid):
            if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U':
                count_l+=1
        
        for i in range(mid,len(s)):
            if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U':
                count_r+=1
                
        return count_l == count_r
