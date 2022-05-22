class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m;
        vector<int> vec;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        for(auto i : m){
            vec.push_back(i.second);
        }
        int count=0;
        for(int i=0; i<vec.size()-1; i++){
            if(vec[i]==vec[i+1])
                count++;
        }
        cout<<count<<vec.size()-1;
        return count==vec.size()-1? true: false;
    }
};
