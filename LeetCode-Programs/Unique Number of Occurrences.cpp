class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        vector<int> vec;
        for(int i=0; i<arr.size(); i++)
            m[arr[i]]++;
            
        for( auto i : m)
            vec.push_back(i.second);
        
        sort(vec.begin(), vec.end());
        
        for(int i=0; i<vec.size()-1; i++)
            if(vec[i]==vec[i+1])
                return false; 
        return true;
    }
};
