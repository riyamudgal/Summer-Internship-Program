class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> vec;
        string str;
        
        for(int i=0;i<s.size();i+=k){
            str=s.substr(i, k);
            if(str.size()==k)
                vec.push_back(str);
            else{
                while(str.length()!=k)
                    str+=fill;
                vec.push_back(str);
            }
        }
        return vec;
    }
};
