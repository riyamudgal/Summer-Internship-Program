class Solution {
public:
    int romanToInt(string s) {
         int res=0;
        int prev=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(prev<=change(s[i]))
                res=change(s[i]);
            else
                res-=change(s[i]);
            prev=change(s[i]);
        }
        return res;
    }
    int change(char c)
    {
    switch(c)
    {
        case 'I':  
            return 1;
        case 'V':
            return 5;
        case 'X':  
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        case 'IV':
            return 4;
        case 'IX':
            return 9;
        case 'XL':
            return 40;
        case 'XC':
            return 90;
        case 'CD':
            return 400;
        case 'CM':
            return 900;
        default: 
            return -1;
    }    
    }
};
