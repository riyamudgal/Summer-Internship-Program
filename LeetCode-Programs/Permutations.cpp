class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        ans.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            ans.push_back(nums);
        }
        
        return ans;
    }
};

//next_permutation() function is used to reorder the elements in the range [first, last) into the next lexicographically greater permutation.
