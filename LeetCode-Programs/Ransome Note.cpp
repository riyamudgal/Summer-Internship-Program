class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        /*sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i,j,k;
        for(i=0;i<ransomNote.length();i++)
        {
            j=count(ransomNote.begin(),ransomNote.end(),ransomNote[i]);
            k=count(magazine.begin(),magazine.end(),ransomNote[i]);
            if(j>k) 
                return false;
        }

    return true; */
        unordered_map<char, int> mp;
        
        for(int i=0; i<magazine.length(); i++) {
            mp[magazine[i]]++;
        }
        
        for(auto i:ransomNote) {
            if(mp[i]>0) 
                mp[i]--;
            else 
                return false;
        }
        
        return true;
    }
};
