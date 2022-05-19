class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        s=s1.split() + s2.split()
        new_list=[]
        for i in s:
            if s.count(i)==1:
                new_list.append(i)
        return new_list
