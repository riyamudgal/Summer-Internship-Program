class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        str_s, str_t=[], []
        for i in s:
            if i!='#':
                str_s.append(i)
            elif str_s!=[]:
                str_s.pop()
                
        for j in t:
            if j!='#':
                str_t.append(j)
            elif str_t!=[]:
                str_t.pop()
            
        return str_s==str_t
