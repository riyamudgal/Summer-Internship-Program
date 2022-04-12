class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        string str = "";
        for(int i=0;i<first.length();i++){      
            int temp = first[i];                 
            for(int j=1; j<strs.size(); j++){   
                if(strs[j][i]!=temp)            
                    return str;
            }
            str += temp;   
        }
        return str;
    }
};
