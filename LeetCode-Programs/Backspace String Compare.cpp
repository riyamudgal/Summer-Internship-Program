class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str_s="";
        string str_t="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]!='#')
                str_s.push_back(s[i]);
            else
                if(str_s.size()!=0)
                    str_s.pop_back(); 
        }
        
        for(int i=0;i<t.size();i++){
            if(t[i]!='#')
                str_t.push_back(t[i]);
            else
                if(str_t.size()!=0)
                    str_t.pop_back(); 
        }
        
        return str_s==str_t;
    }
};
