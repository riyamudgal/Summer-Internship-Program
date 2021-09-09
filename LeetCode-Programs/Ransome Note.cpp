class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i,j,k;
        for(i=0;i<ransomNote.length();i++)
        {
            c1=count(ransomNote.begin(),ransomNote.end(),ransomNote[i]);
            c2=count(magazine.begin(),magazine.end(),ransomNote[i]);
            if(c1>c2) 
                return false;
        }

    return true; 
    }
};
