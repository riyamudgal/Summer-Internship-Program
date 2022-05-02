class Solution {
public:
    bool halvesAreAlike(string s) {
        int mid=s.size()/2;
        int count_l=0, count_r=0;
        
        for(int i=0;i<mid;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                count_l++;
        }
        
        for(int i=mid;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                count_r++;
        }
        return count_l==count_r;
    }
};
