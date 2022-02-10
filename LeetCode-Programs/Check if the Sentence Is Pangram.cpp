class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> str(sentence.begin(), sentence.end());
        /*set<int>str;
        for(int i=0;i<sentence.size();i++)
            str.insert(i);*/
        if(str.size()==26)
            return true;
        else
            return false;
    
    }
};
