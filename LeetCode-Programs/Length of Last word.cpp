class Solution {
public:
    int lengthOfLastWord(string s) {
         int length=0;
        for (int i=s.size()-1;i>= 0;i--) 
        {
            if (s[i]!=' ') 
                length=length+1;
            if (length>0 && s[i]==' ')
                break;
        }
        return length;
        }
};
