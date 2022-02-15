class Solution {
public:
    string thousandSeparator(int n) {
        string str= to_string(n);
        if(n>=1000)
        {
            for(int i=str.length();i>0;i=i-3)
            {
                if(i<str.length())
                    str.insert(i, ".");
            }
        }
        return str;
    }
};
