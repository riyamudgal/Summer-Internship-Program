class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());        
        vector<int> vec;
        for(int i=1;i<=nums.size();i++)
        {
            if(s.count(i)==0)              
                vec.push_back(i);
        }
        return vec;
    }
};
