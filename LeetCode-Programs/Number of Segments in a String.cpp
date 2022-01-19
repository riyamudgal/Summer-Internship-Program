class Solution {
public:
    int countSegments(string s) {
        int count=0;
        s=s+' ';
        for( int i=0;i<s.size();i++)
        {
            if(s[i]!=' ' && (s[i+1]==' ' || s[i+1]=='\0')) 
                count++;
        }
        return count;
    }
};
