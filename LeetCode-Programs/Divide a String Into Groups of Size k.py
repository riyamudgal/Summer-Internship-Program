class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        new_list=[]
        strr=""
        for i in range(0, len(s), k):
            strr=s[i:i+k]
            if len(strr)==k:
                new_list.append(strr)
            else:
                while len(strr)!=k:
                    strr+=fill
                new_list.append(strr)
        return new_list
