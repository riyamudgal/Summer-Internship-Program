class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length();i++){
            if (s[i]=='b'){
                for(int j=i+1;j<s.length();j++){
                    if(s[j]=='a')
                        return false;
                }
            }
            else
                continue;
        }
        return true;
    }
};


