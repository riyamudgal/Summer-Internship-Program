class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        '''count=0
        for i in words:
            if i.startswith(pref):
                count+=1
        return count'''
        count = 0
        for i in words:
            if pref in i and i.index(pref) == 0:
                count += 1
        return count
