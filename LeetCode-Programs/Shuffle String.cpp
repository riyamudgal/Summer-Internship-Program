class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str="";
        int temp=0;
        while(temp<indices.size()){
            for(int i=0;i<indices.size();i++){
                if(indices[i]==temp){
                    str+=s[i];
                    break;
                }
            }
            temp++;
        }
        return str;
    }
};
