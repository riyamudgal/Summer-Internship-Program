class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>m1,m2;
        for(int i=0; i<s.size(); i++){
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        for(int i=0; i<s.size(); i++){
            if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i]) 
                return false;
        }
        return true;
    }
};


//the similar can also be done with the help of character array
