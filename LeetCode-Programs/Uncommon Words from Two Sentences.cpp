class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m;
        string str= "";
        for(int i=0; i<s1.length(); i++){
            if(s1[i]==' '){
                m[str]++;
                str.clear();
            }
            else{
                str.push_back(s1[i]);
            }
        }
        m[str]++;
        str.clear();
        
        for(int i=0; i<s2.length(); i++){
            if(s2[i]==' '){
                m[str]++;
                str.clear();
            }
            else{
                str.push_back(s2[i]);
            }
        }
        
        m[str]++;
        str.clear();
        
        vector<string> vec;
            for(auto i : m){
                if(i.second==1){
                    vec.push_back(i.first);
                }
            }
            return vec;
    }
};
