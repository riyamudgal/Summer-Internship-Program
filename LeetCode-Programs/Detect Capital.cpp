class Solution {
public:
    bool detectCapitalUse(string word) {
        int count_u=0, count_l=0;
        bool first = isupper(word[0]);
        
        for(int i=0;i<word.length();i++){
            if(word[i]<=90 && word[i]>=65)
                count_u++;
       
            if(word[i]>=97 && word[i]<=122)
                count_l++;
        }
        
        if(count_u==word.length() || count_l==word.length() || (first && count_l==word.length()-1))
            return true;
        return false;
    }
};
