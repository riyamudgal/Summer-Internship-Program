class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        count_u, count_l=0,0
        first=word[0].isupper()
        for i in range(len(word)):
            if word[i]>='A' and word[i]<='Z':
                count_u+=1
            if word[i]>='a' and word[i]<='z':
                count_l+=1
                
        if count_l==len(word) or count_u==len(word) or (first and count_l==len(word)-1):
            return True
        return False
