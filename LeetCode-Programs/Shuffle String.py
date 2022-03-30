class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        string=""
        temp=0
        while temp<len(indices):
            for i in range(len(indices)):
                if temp==indices[i]:
                    string+=s[i]
            temp+=1
        return string
