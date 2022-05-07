class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        strr = 0
        for i in patterns:
            if i in word:
                strr +=1
        return strr
