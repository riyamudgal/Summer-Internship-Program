class Solution {
public:
    int maxPower(string s) {
    int count=1,maxx=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1]) 
            maxx=max(maxx,++count);
       else
           count=1;
    }
    return max(maxx,count);
    }
};
